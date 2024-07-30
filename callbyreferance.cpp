#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
	int c=a;
	a=b;
	b=c;
}
int main()
{
	int x,y;
	cout<<"\nenter 2 number:";
	cin>>x>>y;
	cout<<"\nbefore swapping:\nx:"<<x<<"\ny:"<<y;
	swap(x,y);
	cout<<"\nafter swapping:\nx:"<<x<<"\ny:"<<y;
	return 0;
}