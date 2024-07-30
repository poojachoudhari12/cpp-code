#include<iostream>
using namespace std;

void repli(char ch,int n=5)
{
	int i=1;
	cout<<"\noutput\n";
	while(i<=n)
	{
		cout<<ch;
		i++;
	}
}
int main()
{
	repli('#');
	repli('A',3);
	repli('#',7);
	return 0;
}