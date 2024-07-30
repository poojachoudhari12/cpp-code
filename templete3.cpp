//overloading of templete fun

#include<iostream>
#include<string.h>
using namespace std;

template<class T>
void display(T & p,T & q)
{
	cout<<"\nData:"<<p<<"\t"<<q;
}


template<class P>
void input(P &a,P &b)
{
	cout<<"\ndata:";
	cin>>a>>b;
}

template<class P>
void tswap(P & a,P & b)
{
	P c;
	c=a;
	a=b;
	b=c;
}

void tswap(char *a,char *b)
{
	char t[100];
	strcpy(t,a);
//	strcpy(t,a);
	strcpy(a,b);
	strcpy(b,t);
}




int main()
{
	int a=5,b=7;
	cout<<a<<"\t"<<b;
	tswap(a,b);
	cout<<"\n"<<a<<"\t"<<b;
	char p[]="abc";
	char q[]="pqr";
	cout<<"\n"<<p<<"\t"<<q;
	swap(p,q);
	cout<<"\n"<<p<<"\t"<<q;
	float s=9.2,t=8.7;
	cout<<"\n"<<s<<"\t"<<t;
	swap(s,t);
	cout<<"\n"<<s<<"\t"<<t;
	
		return 0;
}