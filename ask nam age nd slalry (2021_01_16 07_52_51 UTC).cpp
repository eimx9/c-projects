#include<iostream>
using namespace std;
struct person
    {
char name[10];
int age;
float salary;
     };
     int main()
     {
     	person p;
     	cout<<"Enter your  name"<<endl;
     	cin>>p.name;
     	cout<<"ok "<<p.name<<"  how old are you now "<<endl;
     	cin>>p.age;
		 cout<<"salary"<<endl;
		 cin>>p.salary;
		 cout<<"display the information"<<endl;
		 cout<<"..............................."<<endl;
		 cout<<"name :"<<p.name<<endl; 
		 cout<<"age :"<<p.age<<endl; 
		 cout<<"salary :"<<p.salary<<endl; 
	 }
     
     
