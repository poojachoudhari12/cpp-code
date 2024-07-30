#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"\nenter no whose table u want to find:";
	cin>>n;
	for(int i=1;i<=10;i++)
	{
		cout<<(n*i);
		cout<<" ";
	}
	return 0;
}