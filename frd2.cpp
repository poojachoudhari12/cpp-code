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
		friend void swap(A&,B&);
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
		friend void swap(A&,B&);
};

void swap(A&p,B&q)
{
	int r=p.a;
	p.a=q.b;
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
	swap(obja,objb);
	obja.display();
	objb.display();
	return 0;
}