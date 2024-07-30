#include<iostream>
using namespace std;

class MyTime
{
	int h,m,s;
	long int toSecond()
	{
		return h*3600l+m*60+s;
	}
	public:
		MyTime()
		{
			h=m=s=0;
		}
		MyTime(int a,int b=0,int c=0)
		{
			h=a;m=b;s=c;
		}
		MyTime(long int z )
		{
		h=z/3600;
		z=z%3600;
		m=z/60;
		s=z%60;	
		}
		MyTime(MyTime &t)
		{
			h=t.h;
			m=t.m;
			s=t.s;
		}
		~MyTime(){}
		friend istream& operator>>(istream &in,MyTime &t)
		{
			cout<<"\nHr:";
			in>>t.h;
			cout<<"\nMn:";
			in>>t.m;
			cout<<"\nSs:";
			in>>t.s;
			return in;
		}
		friend ostream& operator<<(ostream &out,MyTime &t)
		{
			out<<"\nHr:"<<t.h<<"\nMn:"<<t.m<<"\nSs:"<<t.s;
			return out;
		}
		
		MyTime operator+(MyTime &t)
		{
			long int a=toSecond();
			long int b=t.toSecond();
			long int c=a+b;
			MyTime k(c);
			return k;
		}
		MyTime operator-(MyTime &t)
		{
			long int a=toSecond();
			long int b=t.toSecond();
			long int c=labs(a-b);
			MyTime k(c);
			return k;
		}
		int operator>(MyTime &t)
		{
			return toSecond()>t.toSecond();
		}
		int operator<(MyTime &t)
		{
			return toSecond()<t.toSecond();
		}
		int getHr(){
			return h;
		}
		int getMn(){
			return m;
		}
		int getSs()
		{
			return s;
		}
	};
		
		int main()
		{
			MyTime p;
			cin>>p;
			MyTime q;
			cin>>q;
			cout<<p<<q;
			MyTime r=p+q;
			cout<<r;
			if(p>q)
			cout<<"\np:";
			else
			cout<<"\nq:";
			return 0;
		}