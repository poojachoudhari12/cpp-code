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
void Marks::setData()
{
	Number::setData();
	cout<<"\nMarks:";
	for(int i=0;i<5;i++)
	cin>>mrk[i];
}
void Marks::display()
{
	Number::display();
	cout<<"\nMarks:";
	for(int i=0;i<5;i++)
	cout<<" "<<mrk[i];
}
int Marks::total()
{
	int tot=mrk[0],i=1;
	while(i<5)
		tot+=mrk[i++];
	return tot;
}
class Result:public Marks
{
	protected:
		int sum;
		double avg;
	public:
		Result():Marks()
		{
			sum=0;
			avg=0.0;
		}
		~Result(){}
		void setData()
		{
			Marks::setData();
			sum=total();
			avg=double(sum)/5;
		}
		void display()
		{
			Marks::display();
			cout<<"\nTotal:"<<sum;
			cout<<"\nAvg:"<<avg;
			
		}		
};
int main()
{
	Result r;
	r.setData();
	r.display();
	return 0;
	
}