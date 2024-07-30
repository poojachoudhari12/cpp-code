#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	ptr=new int;
	cout<<"\ndata:\n";
	cin>>*ptr;
	cout<<"\ndata"<<*ptr;
	*ptr=*ptr+5;
	cout<<"\ndata:"<<*ptr;
	delete ptr;
	return 0;
	
}
