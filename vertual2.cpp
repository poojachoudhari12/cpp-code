#include<iostream>
using namespace std;

class A
{
	int a;
	public:
		A(){
			a=0;
		}
		~A(){}
		virtual void set()
		{
			cout<<"\nAa:";
			cin>>a;
		}
		virtual void display()
		{
			cout<<"\nAa:"<<a;
		}
		
};
class B:public A
{
	int b;
	public:
		B():A(){
			b=0;
		}
		~B(){}
		void set()
		{
			cout<<"\nB b:";
			cin>>b;
		}
		void display()
		{
			cout<<"\nBb:"<<b;
		}
};
class C:public B
{
	int c;
	public:
		C():B(){
			c=0;
		}
		~C(){}
		void set()
		{
			cout<<"\nCc:";
			cin>>c;
		}
		void display()
		{
			cout<<"\nCc:"<<c;
		}
};
int main()
{
	A *aptr;
	A aobj;
	aptr=&aobj;
	aptr->set();
	aptr->display();
	aptr=new B();
	aptr->set();
	aptr->display();
	aptr=new (c);
	aptr->set();
	aptr->display();
	return 0;
}