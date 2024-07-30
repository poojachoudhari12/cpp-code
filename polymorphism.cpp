#include<iostream>
using namespace std;

void display()
{
	cout<<"\nwelcome";
}

void display(int a)
{
	cout<<"\nthis is simple int data:"<<a;
}

void display(int long a)
{
	cout<<"\nthis is long int data:"<<a;
}

void display(double a)
{
	cout<<"\nthis is double data:"<<a;
}

int main()
{
	display();
	display('A');
	display(132);
	display(9.2);	
	return 0;
	
}