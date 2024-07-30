#include<iostream>
using namespace std;
int a=1000;
int main()
{
	int a=1;
	{
		int a=10;
		{
			int a=100;
			cout<<a<<"\t"<<::a<<"\n";	
		}
	cout<<a<<"\t"<<::a<<"\n";	
	}
	cout<<a<<"\t"<<::a<<"\n";
	return 0;
}