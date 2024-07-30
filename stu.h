//create a header file and implement a class student

#include<iostream>

#include<fstream>
using namespace std;

class stu
{
	int no;
	char nm[15];
	public:
		stu()
		{
			no=0;
			nm[0]='\0';
		}
		~stu(){}
		void setData(int a)
		{
			no=a;
			cout<<"\nName:";
			cin>>nm;
		}
		void display()
		{
			cout<<"\nNo:"<<no<<"\nname:"<<nm;
		}
		int getNo(){
			return no;
		}
		char *getName(){
			return nm;
		}
};


