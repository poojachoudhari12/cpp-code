#include<iostream>
using namespace std;

class Number
{
	int no;
	public:
	Number()
	{
		no=0;
		cout<<"\nDefualt";
	}
	Number (int a)
	{
		no=a;
		cout<<"\nPara";
	}
	Number(Number &t)
	{
		no=t.no;
		cout<<"\ncopy";
	}
	~Number()
	{
		cout<<"\nDistructor";
	}
	void setNumber()
	{
		cout<<"\nEnter No:";
		cin>>no;
	}
	void setNumber(int a)
	{
		no=a;
	}
	void display()
	{
		cout<<"\nNo:"<<no;
	}
};
int main()
{
	Number a;
	{
		Number b(10);
		b.display();
		
	}
	a.display();
//	Number c=20;
	//c.display();
	//Number d(c);
	//d.display();
	a.setNumber();
	a.display();
	return 0;
	
}