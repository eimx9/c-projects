#include<iostream>
using namespace std;
int max(int x,int y)
{
if (x>y)
{
return x;
}
else
{
	return y;
}
}
int main()
{
	int a,b,c;
	cout<<"enter"<<endl;
	cin>>a>>b;
	c=max(a,b);
	cout<<"is"<<c<<endl;
	cout<<"other"<<max(5,6);
}
