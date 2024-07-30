#include<iostream>
#include<iomanip>
using namespace std;

class result
{
	private:
	int rno;
	int mrk[15];
	
	public:
	void setData();
	void setData(int n);
	void display();
	int total();
	int avg()
	{
		return total()/5;
		}	
	int getNo()
	{
		return rno;
	}
};

int result::total()
{
	int tot=mrk[0],i=1;
	while(i<5)
	tot+=mrk[i++];
	return tot;
}

void result::setData(int n)
{
	rno=n;
	cout<<"\nMarks:";
	for(int i=0;i<5;i++)
	cin>>mrk[i];
}
void result::setData()
{
	cout<<"\nRoll no:";
	int n;
	cin>>n;
	setData(n);
}
void result::display()
{
	cout<<"\nRoll no:"<<rno;
	cout<<"\nMarks:";
	for(int i=0;i<5;i++)
	{
		cout<<setw(5)<<mrk[i];
	}
	cout<<"\nTotal:"<<total();
	cout<<"\nAvg:"<<avg();
}

int main()
{
	result a;
	a.setData();
	a.display();
	a.total();	
	return 0;
	
}