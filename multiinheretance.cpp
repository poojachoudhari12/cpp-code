//multi inheretance

#include<iostream>
using namespace std;

class Sem1
{
	protected:
		int os1,os2;
		int ts1,ts2,ts3;
	public:
	Sem1()
	{
		os1=os2=ts1=ts2=ts3=0;
		
		}
	~Sem1(){}
	void setData()
	{
		cout<<"\noral sem1:";
		cin>>os1>>os2;
		cout<<"\nTheory sem1:";
		cin>>ts1>>ts2>>ts3;
	}
	void display()
	{
		cout<<"\nsem1\noral:"<<os1<<"\t"<<os2;
		cout<<"\nTheory:"<<ts1<<"\t"<<ts2<<"\t"<<ts3;
	}
};
class Sem2
{
	protected:
		int os3;
		int ts4,ts5;
	public:
	Sem2()
	{
		os3=ts4=ts5=0;
		
		}
	~Sem2(){}
	void setData()
	{
		cout<<"\noral sem2:";
		cin>>os3;
		cout<<"\nTheory sem1:";
		cin>>ts4>>ts5;
	}
	void display()
	{
		cout<<"\nsem2\noral:"<<os3;
		cout<<"\nTheory:"<<ts4<<"\t"<<ts5;
	}
};
class Result:public Sem1,public sem2
{
	protected:
		int ototal;
		int ttotal;
	public:
	Result():Sem1(),Sem2()
	{
		ototal=ttotal=0;
		
		}
	~Result(){}
	void setData()
	{
		Sem1::setData();
		Sem2::setData();
		ototal=os1+os2+os3;
		ttotal=ts1+ts2+ts3+ts4+ts5;
	}
	void display()
	{
		Sem1::display();
		Sem2::display();
		cout<<"\noral total:"<<ototal;
		cout<<"\ntheory total:"<<ttotal;
	}
};
class student:public Result
{
	protected:
	int rno;
	char nm[15];
	public:
	student():Result()
	{
		rno=0;
		nm[0]='\0';
	}
	~student(){}
	void  setData()
	{
		cout<<"\nRoll No:";
		cin>>rno;
		cout<<"\nname:";
		cin>>nm;
		Result::setData();
	}
	void display()
	{
		cout<<"\nRoll nO:"<<rno;
		cout<<"\nName:"<<nm;
		Result::display();
	}
};
int main()
{
	student r;
	r.setData();
	r.display();
	return 0;
}
