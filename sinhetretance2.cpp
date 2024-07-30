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
class ExNumber: Number
{
	public:
		void table();
		int digitcount();
		void input()
		{
			setData();
		}
		void output()
		{
			display();
		}
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
	ExNumber q;
	
	q.input();
	q.output();
	q.table();
	cout<<"\ndigit count:";
	cout<<q.digitcount();
	return 0;
}