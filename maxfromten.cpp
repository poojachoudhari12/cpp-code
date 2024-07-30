#include<iostream>
using namespace std;
int main()
{
	int n,max;
	cout<<"\nenter 10 nos:";
	for(int i=0;i<10;i++)
	{
		cin>>n;
		if(i==0)
			max=n;
		else
		{
			if(n>max)
			max=n;
		}
	}
	cout<<"\nthe max no is:";
	cout<<max;

	
	return 0;
	
}
