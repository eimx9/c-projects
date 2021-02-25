#include<iostream>
using namespace std;
int main()
{
	int x,cxx,z=1;
	cout<<"enter the number"<<endl;
	cin>>x;
	cout<<"enter the exponenet"<<endl;
	cin>>cxx;
	for(int i=1;i<=cxx;i++)
	{
		z=z*x;
	}
	cout<<x<<" ^ "<<cxx<<" = "<<z<<endl;
}
