#include<iostream>
using namespace std;
int main()
{
	int basicsalary, time,rate,rate1,overtime,overtime1,pension,tax,grosssalary,grosssalary1,totaldeduction,netsalary;
	cout<<"plz enter basic salary"<<endl;
	cin>>basicsalary;
	cout<<"plz enter over time"<<endl;
	cin>>time;
	{
		if(basicsalary<=210)
		{
		rate=basicsalary*1.75;
			cout<<rate<<endl;
			overtime=time*rate;
			grosssalary=overtime*basicsalary;
			pension=0.08*basicsalary;
				cout<<"over time  ="<<overtime<<endl;
				cout<<"gross salary  ="<<grosssalary<<endl;
				cout<<"pension="<<pension<<endl;
		}
	
		else if(basicsalary>210)
		{
			rate1=basicsalary/204*1.75;
			cout<<rate1<<endl;
                 	overtime1=rate1*time;
                 grosssalary1=overtime1*basicsalary;
                 	pension=0.08*basicsalary;
						cout<<"over time ="<<overtime1<<endl;
						cout<<"gross salary  ="<<grosssalary1<<endl;
						cout<<"pension="<<pension<<endl;
		}
		{
			if(basicsalary<=600)
			{
				cout<<"tax ="<<basicsalary*0<<endl;
			}
			else if(basicsalary<=1650)
		{
			cout<<"tax ="<<basicsalary*0.1-60;
		}
		else if(basicsalary<=3200)
		{
			cout<<"tax ="<<basicsalary*0.15<<endl;
		}
		else if(basicsalary<=5250)
		{
			cout<<"tax ="<<basicsalary*0.2<<endl;
		}
			else if(basicsalary<=7800)
		{
			cout<<"tax ="<<basicsalary*0.25<<endl;
		}
			else if(basicsalary<=10900)
		{
			cout<<"tax ="<<basicsalary*0.3<<endl;
		}
			else if(basicsalary>10900)
		{
			cout<<"tax ="<<basicsalary*0.35<<endl;
		}
		totaldeduction=tax*pension;
		{
			cout<<"totaldeduction ="<<totaldeduction<<endl;
			
		}
		netsalary=grosssalary-totaldeduction;
		{
		cout<<"net salary ="<<grosssalary-totaldeduction<<endl;
		}
		
	}
}
}
