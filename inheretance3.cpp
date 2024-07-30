#include<iostream>
using namespace std;

class Number
{
	protected:
	int rno;
	public:
		Number()
		{
			rno=0;
		}
		~Number(){}
		void setData()
			{
			cout<<"\nRoll no:";
			cin>>rno;
		}
		void display()
			{
			cout<<"\nRoll no:"<<rno;
		}	
		
		int getData()
		{
		return rno;	
		}
};

class Marks:public Number
{
	protected:
		int mrk[5];
		public:
			Marks():Number()
			{}
			~Marks(){}
			void setData();
			void display();
			int total();
};
class sports
{
	protected:
		int mrk;
		public:
			sports(){
				mrk=0;
			}
			~sports(){}
			void setData();
			void display();
			int getMarks();	
};
class Result:public Marks,public sports
{
	protected:
		int total;
	public:
		Result():Marks(),sports()
		{
			total=0;
		}
		~Result(){}
		void setData()
		{
			Marks::setData();
			sports::setData();
			total=total()+5mrk;
		}
		void display()
		{
			Marks::display();
			sports::display();
			cout<<"\nTotal:"<<total;
		}
		
};
int main()
{
	Result r;
	r.setData();
	r.display();
	return 0;
}
