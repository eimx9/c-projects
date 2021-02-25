#include <iostream> 
using namespace std; 
int main()
{
ofstream out("table.txt");
for(int a=1;a<11;a++)
{
	for(int k=1;k<11;k++)
{
out<<a<<'x'<<k<<'='<<a*k<<endl;

}}
ifstream is (table.txt);
out closecl;
return 0;




)
