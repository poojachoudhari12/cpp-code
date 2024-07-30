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
class NewNumber :Number
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
				Number::SetData();
				cout<<"\nMarks:";
				cin>>mrk;
			}
			void display()
			{
				Number::display();
				cout<<"\nMarks:"<<mrk;
			}
			
};
int main()
{
	NewNumber k;
	k.SetData();
	k.display();
	return 0;
}