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
		void set()
		{
			cout<<"\nAa:";
			cin>>a;
		}
		void display()
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
/*int main()
{
	A obja;
	obja.set();
	obja.display();
	B objb;
	objb.set();
	objb.A::set();
	objb.A::display();
	objb.display();
	C objc;
	objc.A::set();
	objc.B::set();
	objc.A::display();
	
	
		
}*/
int main()
{
	A *aptr;
	A obja;
	aptr=&obja;
	aptr->set();
	aptr->display();
	B objb;
	aptr=&objb;
	aptr->set();
	aptr->display();
	((B*)aptr)->set();
	((B*)aptr)->display();
	C*cptr;
	C objc;
	cptr=&objc;
	cptr->set();
	cptr->display();
	
	return 0;
}