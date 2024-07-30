#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int &b=a;
	cout<<"\nvalue:"<<a;
	cout<<"\nvalue:"<<b;
	b+=5;
	cout<<"\nvalue:"<<a;
	a/=3;
	cout<<"\nvalue:"<<b;
	cout<<"\nvalue:"<<a;
	return 0;
}
