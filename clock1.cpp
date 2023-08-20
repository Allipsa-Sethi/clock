#include<iostream>
#include<windows.h> //windows.h header file
using namespace std;
int main()
{
	double h,m,s,a,err; // using a and err
	err=a=0;
	while(err==0)
	{
		cout<<"enter hour: "<<endl;
		cin>>h;
		cout<<"enter minutes: "<<endl;
		cin>>m;
		cout<<"enter seconds: "<<endl;
		cin>>s;
		if(h<24 && m<60 && s<60)
		{
			err++;
		}
		else
		system("cls"); // system: to clear the previous couts
	}
	while(a==0)
	{
		system("cls");
		cout<<"time now : "<<h<<":"<<m<<":"<<s<<endl;
		Sleep(1000); // sleep
		s++;
		if(s>59)
		{
			s=00;
			m++;
		}
		if(m>59)
		{
			m=00;
			h++;
		}
		if(h>23)
		{
			h=00;
		}
	}
	return 0;
}
