//1.single inheretance
//2.use of constructors
//3.use of protected no.

#include<iostream>
using namespace std;
class Number
{
	protected:
	int no;
	public:
		Number()
		{
			no=0;
		}
		Number(int a)
		{
			no=a;
		}
		~Number(){}
		void setData()
		{
			cout<<"\nRoll no:";
			cin>>no;
		}
		void display()
		{
			cout<<"\nNo:"<<no;
		}
		int getNo(){
			return no;
		}
};
class NewNumber:public Number
{
	protected:
		double mrk;
		public:
			NewNumber():Number()
			{
				mrk=0.0;
			}
			NewNumber(int a,double b):Number(a)
			{
				mrk=b;
			}
			~NewNumber(){}
			void SetMarks()
			{
				cout<<"\nMarks:";
				cin>>mrk;
			}
			void displayMarks()
			{
				cout<<"\nMarks:"<<mrk;
			}
			double getMarks()
			{
				return mrk;
			}
};
int main()
{
	Number a;
	a.setData();
	a.display();
	NewNumber b(17,9.2);
	b.display();
	b.displayMarks();
	NewNumber c;
	c.setData();
	c.getMarks();
	c.display();
	c.displayMarks();
	return 0;
}