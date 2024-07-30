#include<iostream>
using namespace std;

class B;
class A
{
	int a;
	public:
		void setA()
		{
			cout<<"\nAa:";
			cin>>a;
		}
		void display()
		{
			cout<<"\nAa:"<<a;
		}
		void swap(B&);
};

class B
{
	int b;
	public:
		void setB()
		{
			cout<<"\nBb:";
			cin>>b;
		}
		void display()
		{
			cout<<"\nBb:"<<b;
		}
		friend void A::swap(B&);
};

void A::swap(B&q)
{
	int r=a;
	a=q.b;
	q.b=r;
	
}
int main()
{
	A obja;
	B objb;
	obja.setA();
	objb.setB();
	obja.display();
	objb.display();
	obja.swap(objb);
	obja.display();
	objb.display();
	return 0;
}