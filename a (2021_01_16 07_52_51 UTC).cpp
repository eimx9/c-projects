#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int();
	float a, b, res;
	char choice, ch,s;
	do
	{
	cin>>a;
		
		cin>>choice;
		switch(choice)
		{
			case's' :cin>>b;
			
			res=a+b;
			cout<<"="<<res;
			break;
			case'-' :cin>>b;
			
			res=a-b;
			cout<<"result="<<res;
			break;
			case'*' :cin>>b;
			
			res=a*b;
			cout<<"result="<<res;
			break;
			case'/' :cin>>b;
			
			res=a/b;
			cout<<"result="<<res;
			break;
			case'5' : exit(0);
			break;
			default :cout<<"Wrong choice..!!";
			break;
		}
		cout<<"\n---------------------------\n";
		
	}while(choice!=5 && choice!=getchar());
	getch();
}






