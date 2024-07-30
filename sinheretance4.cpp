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
		void SetData()
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
			void SetData()
			{
				cout<<"\nMarks:";
				cin>>mrk;
			}
			void display()
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
	a.SetData();
	a.display();
	NewNumber b(17,9.2);
	b.Number::display();
	b.display();
	NewNumber c;
	c.Number::SetData();
	c. SetData();
	c.Number::display();
	c.display();
	return 0;
}