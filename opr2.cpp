//opretor overloading 2
#include<iostream>
using namespace std;
class Number
{
	int no;
	public:
		Number()
		{
			no=0;
		}
		Number (int a)
		{
			no=a;
		}
		Number(Number &t)
		{
			no=t.no;
		
		}
		~Number(){}
		void setData()
		{
			cout<<"\nNo:";
			cin>>no;
		}
		void display()
		{
			cout<<"\nNo:"<<no;
		}
		Number operator+(int a)
		{
			Number t(no+a);
			return t;
		}
		Number operator-(int a)
		{
			Number t(no-a);
			return t;
		}
		Number operator+(Number &a)
		{
			Number t(no+a.no);
			return t;
		}
		Number operator-(Number &a)
		{
			Number t(no-a.no);
			return t;
		}
		friend  Number operator+(int b,Number &a)
		{
			Number t(b+a.no);
			return t;
		}
		friend  Number operator-(int b,Number &a)
		{
			Number t(b-a.no);
			return t;
		}
		int operator>(int a){
			return (no>a);
		}
		int operator<(int a){
			return (no<a);
		}
		int operator==(int a){
			return (no==a);
		}
		int operator>(Number &a){
			return (no>a.no);
		}
				int operator<(Number &a){
			return (no<a.no);
		}
				int operator==(Number &a){
			return (no==a.no);
		}
		Number operator+=(int a)
		{
			no=no+a;
			return *this;
		}
		Number operator-=(int a)
		{
			no=no-a;
			return *this;
		}
		//preincrement
		Number operator++()
		{
			no=no+1;
			Number t(no);
			return t;	
		}
		Number operator++(int)
		{
			Number t(no++);
			return t;
		}
		Number operator--()
		{
			no=no-1;
			Number t(no);
			return t;	
		}
		Number operator--(int)
		{
			Number t(no--);
			return t;
		}
	};
		int main()
		{
			Number p(7),q,r;
			p.display();
			q=p+3;
			q.display();
			r=p+q;
			r.display();
			r=3+p;
			r.display();
			p+=3;
			p.display();
			q=++p;//pre
			p.display();
			q.display();
			q=p++;//post incre
			p.display();
			q.display();	
			q=--p;//pre
			p.display();
			q.display();
			q=p--;//post incre
			p.display();
			q.display();				
			if(p>8)
			cout<<"\nMore";
			else
			cout<<"\nless";
			
			return 0;
		}