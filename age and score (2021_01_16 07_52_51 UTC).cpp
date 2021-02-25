#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter the score you get at the exam"<<endl;
	cin>>x;
	cout<<"and  age "<<endl;
	cin>>y;
	if(x>=70)
	{
	if(y<10)
	{
	cout<<"you did the great"<<endl;
	}
	else
	{
	cout<<"you have passed"<<endl;
	}
	}else
	{
	cout<<"sorry we cant accept this number try again latter "<<endl;
	}
}
	
