#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
int();
	float a, b, res;
	char choice, ch;
	do
	{
cout<<"+";
cout<<"-";
cout<<"*";
cout<<"/";
cout<<"5.exit";
cout<<"enter your choice from this operations:";
cin>>choice;
switch(choice)
{
case'1' :cout <<"enter two number:";
cin>>a>>b;
res=a+b;
cout<<"result="<<res;
break;
case'2' :cout <<"enter two number:";
cin>>a>>b;
res=a-b;
cout<<"result="<<res;
break;
case'3' :cout <<"enter two number:";
cin>>a>>b;
res=a*b;
cout<<"result="<<res;
break;
case'4' :cout <<"enter two number:";
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






