#include<iostream>
using namespace std;

class student 
{
	int no;
	char nm[15];
	double mrk;
	
	public:
	void setData();
	void setData(int);	
	void display();	
	int getNo(){
		return no;
	}
	double getMarks()
	{
		return mrk;
	}
};
void student::setData()
{
	cout<<"\nRoll no:";
	cin>>no;
	cout<<"\nName:";
	cin>>nm;
	cout<<"\nmarks:";
	cin>>mrk;
}

void student::setData(int a)
{
	no=a;
	cout<<"\nName:";
	cin>>nm;
	cout<<"\nmarks:";
	cin>>mrk;
}

void student::display()
{
	cout<<"\nroll no:"<<no<<"\nName:"<<nm<<"\nmarks:"<<mrk;
}

/*int main()
{
	student a,b;
	a.setData();
	a.display();
	b.setData();
	b.display();	
	return 0;	
}
*/
/*int main()
{
	student *a;
	a=new student;
	a->setData();
	a->display();
	delete a;
	return 0;
}
*/
/*int main()
{
	student a[5];
	for(int i=0;i<5;i++)
	{
		a[i]=setData(i+1);
	}
	for(int i=0,i<5;i++)
	(a+i)->display();
}
*/
int main()
{
	student *a=new student[5];
	for(int i=0;i<5;i++)
	(a(a+i).setData(i+1));
	for(int i=0;i<5;i++)
	(a+i)->display();
	delete[]a;
	return 0;
}