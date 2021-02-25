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
		cout<<"1.s\n";
		cout<<"2.+\n";
		cout<<"3.*\n";
		cout<<"4./\n";
		cout<<"5.exit\n\n";
		cout<<"enter your choice from this operations:";
		cin>>choice;
		switch(choice)
		{
			case's' :cout <<"enter two number:";
			cin>>a>>b;
			res=a+b;
			cout<<"result="<<res;
			break;
			case'+' :cout <<"enter two number:";
			cin>>a>>b;
			res=a-b;
			cout<<"result="<<res;
			break;
			case'*' :cout <<"enter two number:";
			cin>>a>>b;
			res=a*b;
			cout<<"result="<<res;
			break;
			case'/' :cout <<"enter two number:";
			cin>>a>>b;
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






