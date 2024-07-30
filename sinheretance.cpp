#include<iostream>
using namespace std;

class Number
{
	int no;
	public:
		void setData()
		{
			cout<<"\nenter no:";
			cin>>no;
		}
		void display()
		{
			cout<<"\nNumber:"<<no;
		}
		getno()
		{
			return no;
		}
};
class ExNumber:public Number
{
	public:
		void table();
		int digitcount();
};

void ExNumber::table()
{
	int i=1,n=getno();
	cout<<"\nTable:\n";
	while(i<=10)
	{
		cout<<" "<<n*i;
		i++;
	}
}
int ExNumber::digitcount()
{
	int cnt=0,n=getno();
	while(n>0)
	{
		cnt++;
		n/=10;
	}
	return cnt;
}

int main()
{
	Number p;
	p.setData();
	p.display();
	ExNumber q;
	q.setData();
	q.display();
	q.table();
	cout<<"\ndigit count:";
	cout<<q.digitcount();
	return 0;
}