#include<iostream>
using namespace std;

int main()
{
	int *ptr;
	ptr=new int(10);
	cout<<"\ndata:\n"<<*ptr;
	*ptr=*ptr+5;
	cout<<"\ndata:\n"<<*ptr;
	delete ptr;
	return 0;
}