#include<iostream>
using namespace std;
int add(int x,int y)
{
return x+y;
}

int main()
{
	int a,b,d;
	cout<<"enter"<<endl;
	cin>>a>>b;
	d=add(a,b);
	cout<<"answer"<<d;
}
