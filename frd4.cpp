#include<iostream>
using namespace std;

class A;
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
	 void swap(A&);
};
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
		friend void B::swap(A&);
};

void B::swap(A&p)
{
	int r=p.a;
	p.a=b;
	b=r;
}
int main()
{
	A obja;
	B objb;
	obja.setA();
	objb.setB();
	obja.display();
	objb.display();
	objb.swap(obja);
	obja.display();
	objb.display();
	return 0;
}