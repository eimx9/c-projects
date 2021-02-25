#include <iostream> 
#include <iomanip> 
using namespace std; 
int main()
 { long number = 0;
  int  count = 0; 
  double price = 0.0;
// Input:
 cout << "\nPlease enter article characteristics.\n";
  cout << "Article number:  ";
   cin  >> number;
cout << "Number of pieces:      ";
 cin  >> count;
cout << "Price per piece:     ";
 cin  >> price;
// Output:
cout <<
 "\n\tArticle Number    Quantity    Price per piece ";
 
cout << "\n\t" 
<< setw(8)  << number
 << setw(16) << count 
 << fixed    << setprecision(2) 
 << setw(16) << price << " Dollar" << endl;
return 0;
}
