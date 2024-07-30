//implementation of stack using templates

#include<iostream>
#include<string.h>
#define N 5
using namespace std;
template<class P>
class stack
{
	int top;
	P arr[5];
	public:
		stack()
		{
			top=-1;
		}
		~stack(){}
		void push(P & a)
		{
				if(top==N-1)
				{
					cout<<"\noverflow";
					return;
				}
				++top;
				arr[top]=a;
		}
		void pop()
		{
			if(top==-1)
			cout<<"\nUnderflow";
			else
			--top;
		}
		void display();
	};
	template <class P>
	void stack<P>::display()
	{
		if(top==-1)
		cout<<"\nEmpty Stack";
		else
		{
			cout<<"\nData\n";
			for(int i=top;i>=0;i--)
			cout<<" "<<arr[i];
			}	
		}	
	
	int main()
	{
		stack <int>a;
		int c=10;
		a.push(c);
	//	a.push(20);
		a.display();
		a.pop();
		a.display();
		stack <double>b;
		double k=9.2,m=8.2;
		b.push(k);
		b.push(m);
		b.display();
	}