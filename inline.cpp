#include<iostream>
using namespace std;

inline int square(int a)
{
	return a*a;
}
inline int cube(int a)
{
	return a*a*a;
}

int main()
{
	int a;
	cout<<"\nenter the no:";
	cin>>a;
	cout<<"\nthe value of a is:"<<a;
	cout<<"\nthe square of a is:"<<square(a);
	cout<<"\nthe cube of a is:"<<cube(a);	
	return 0;
	
}