#include <iostream>
 #include <iomanip>
  using namespace std;
int main() { double rate = 27.5;   // Exchange rate: // one Euro to one Dollar 
cout << fixed << setprecision(2);
cout << "\tdollar \tethiopia\n";
for( int euro = 1; euro <= 20; ++euro)
 cout << "\t " << euro
  << "\t " << euro*rate << endl;
return 0;
}
