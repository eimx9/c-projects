#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	cout<<"5.exit\n";
	cin>>choice;
switch(choice)
{
	case'5' : exit(0);
break;
}
{
int x=1, y;
y=++++x;// y=2 and x=2//
y=x++;// y=3 and x=2//
y=x--;// y=2 and x=2//
y=--x;// y=1 and x=1//
cout<<"The value of x="<<x <<"\n";//"\n" means like of endl with out ""//
cout<<"The value of y="<<y<<"\n";
}while(choice!=5 && choice!=getchar());
getch();

}
