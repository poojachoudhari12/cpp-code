#include<iostream>
#include"MyTime.h"
class Emp
{
	int eno;
	char enm[15];
	int esph;
	MyTime Wt;
	public:
	Emp()
	{
		eno=esph=0;
		enm[0]='\0';
		}	
	~Emp(){}
	void setData()
	{
		cout<<"\nEmployee NO:";
		cin>>eno;
		cout<<"\nName:";
		cin>>enm;
		cout<<"\nSalary per hour:";
		cin>>esph;
		cout<<"\nWork Time:";
		cin>>Wt.setTime();
	}
	void setData(int n)
	{
		eno=n;
		cout<<"\nName:";
		cin>>enm;
		cout<<"\nsalary per hour:";
		cin>>esph;
		cout<<"\nwork time:";
		Wt.setTime();
		}	
	int calcsalary()
	{
		int h=wt.gethr();
		return esph *h;
		}
	void dispaly()
	{
		cout<<"\nEmployee Data:"<<"\nNo:"<<eno<<"\nName:"<<enm<<"\nSalary per hour:"<<esph<<"\nwork time:";
		Wt.display();
		cout<<"\nTotal salary:"<<calcsalary();
				}
	int getNo()
	{
		return eno;
							}						
};

void main()
{
	Emp p[5];
	int i=0;
	while(i<5)
	{
		p[i].setData(i+1);
		i++;
		
	}
	for(i=0;i<5;i++)
	p[i].display();
}