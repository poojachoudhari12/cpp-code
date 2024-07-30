#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	cout<<"enter 10 nos:";
	for(i=0;i<10;i++)
	{
		cin>>n;
		sum=sum+n;
	}
	cout<<"\nthe sum of nos:";
	cout<<sum;
	return 0;
}