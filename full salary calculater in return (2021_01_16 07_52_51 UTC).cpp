#include<iostream>
using namespace std;
 int Ot_rate(float x)//x=basic salary
 {
 	if(x<=210)
 	{
 		return x*1.75;
	}
	else if(x>210)
	{
		return x/204*1.75;
	}
 }
 int Overtime_salary(float y,float z)//y=overtime rate ; z=overtime hours
 {
 	return y*z;
 }
 int Gross_salary(float a,float b)//a=overtime salary ; b=basic salary
 {
 	return a+b;
 }
 int Pension(float d)//d=basic salary
 {
 	return 0.08*d;
 }
 int Tax(float h)//h=basic salary
 {
 	if(h>=0&&h<=600)
 	{
 		return h*0-0;
	}
	else if(h>601&&h<=1650)
	{
		return h*0.1-60;
	}
	else if(h>=1651&&h<=3200)
	{
		return h*0.15-142.5;
	}
	else if(h>=3201&&h<=5250)
	{
		return h*0.2-302.5;
	}
	else if(h>=5251&&h<=7800)
	{
		return h*0.25-565;
	}
	else if(h>=7801&&h<=10900)
	{
		return h*0.3-955;
	}
	else if(h>10900)
	{
		return h*0.35-1500;
	}
 }
 int Total_deduction(float q,float w)//q=income tax ; w=pension
 {
 	return q+w;
 }
 int Net_salary(float o,float p)//o=gross salary ; p=total deduction
 {
 	return o-p;
 }
 int main()
 {
 	float salary,Ot_hour;
 	cout<<"Enter the basic salary."<<endl<<endl;
 	cin>>salary;
 	int a=Ot_rate(salary);
 	cout<<endl<<"The Overtime Rate is: "<<a<<endl<<endl;
 	cout<<"Enter the amount of Overtime hours."<<endl<<endl;
 	cin>>Ot_hour;
 	int b=Overtime_salary(a,Ot_hour);
 	cout<<endl<<"The Overtime Salary is: "<<b<<endl<<endl;
 	int c=Gross_salary(b,salary);
 	cout<<"The Gross Salary is: "<<c<<endl<<endl;
 	int d=Pension(salary);
 	cout<<"The Pension is: "<<d<<endl<<endl;
 	int e=Tax(salary);
 	cout<<"The Income Tax is: "<<e<<endl<<endl;
 	int f=Total_deduction(e,d);
 	cout<<"The Total Deduction is: "<<f<<endl<<endl;
 	int g=Net_salary(c,f);
 	cout<<"The Net Salary is: "<<g<<endl<<endl;
 }
