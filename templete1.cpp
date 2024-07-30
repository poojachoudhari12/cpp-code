//template fun

#include<iostream>
using namespace std;

template<class T>
void display(T &var)
{
	cout<<"\nData:"<<var;
}
template<class P>
void input(P &var)
{
	cout<<"\ndata:";
	cin>>var;
}
int main()
{
	int a;
	float b;
	char c;
	input(a);
	input(b);
	input(c);
	display(a);
	display(b);
	display(c);
	return 0;
}