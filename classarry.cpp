#include<iostream>

class Result
{
	int rno;
	int mrk[5];
	public:
		Result();
		~Result(){	}
		void setData(int n);
		void setData();
		int total();
		int avg()
		{
			return total ()/5;
		}
		void display();
		getNo()
		{
			return no;
		}
};
Result::Result()
{
	no=0;
	for(i=0;i<5;i++)
	{
		mrk[i]=0;
	}
}
void Result::setData(int a)
{
	no=a;
	cout<<"\nMarks:";
	for(i=0;i<5;i++)
	cin>>mrk[i];
 } 
 void Result::setData()
 {
 	cout<<"\nRoll no:";
 	cin>>rno;
 	cout<<"\nMarks:";
 	for(i=0;i<5;i++)
	cin>>mrk[i];
 }
 
 int Result::total()
 {
 	int tot=mrk[0],i=1;
 	while(i<5)
 	{
 		tot+=mrk[i++];
 		return tot;
	 }
 }
 void Result::display()
 {
 	cout<<"\nRoll no:"<<rnm;
 	cout<<"\nMarks:";
 	for(i=0;i<5;i++)
 	cout<<setW(5)<<mrk[i];
 	cout<<"\nToatl:"<<total();
 	cout<<"\navg:"<<avg();
 	
 }
 int main()
 {
 	Result p;
 	p.setData();
 	p.display();
 	return 0;
 }