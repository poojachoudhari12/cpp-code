#include<iostream>
using namespace std;
int main()
{
	int i=2,n;
	cout<<"\nenter no to find wheter it is prime or not:";
	cin>>n;
	while(i<n)
	{
		if(n%i==0)
		break;
		i++;
	}
	if(i==n)
	cout<<"prime";
	else
		cout<<"not prime";
	return 0;
	
}
