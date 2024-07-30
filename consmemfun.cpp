#include<iostream>
#define N 5

using namespace std;

class Result
{
	int mrk[N];
	int rno;
	
	public:
		Result();
		Result(Result &k);
		~Result(){}
		void setResult(int);
		void setResult();
		void display();
		int total();
		int avg();
		void setMarks();
		
};
Result::Result()
{
	rno=0;
	for(int i=0;i<N;i++)
	mrk[i]=0;
}	
		
Result::Result(Result &t)
{
	rno=t.rno;
	for(int i=0;i<N;i++)
	mrk[i]=t.mrk[i];
		}				
		
int Result::total()
{
	int tot=mrk[0],i=1;
	while(i<N)
	{
		tot+=mrk[i];
		i++;
	}
	return tot;
}

int Result::avg()
{
	return total()/N;
}

void Result::setMarks()
{
	cout<<"\nMarks:\n";
	for(int i=0;i<N;i++)
	cin>>mrk[i];
	
}

void Result::setResult()
{
	cout<<"\nROll NO:";
	cin>>rno;
	setMarks();
}
void Result::setResult(int a)
{
	rno=a;
	setMarks();
}
void Result::display()
{
	cout<<"\nRoll no:"<<rno;
	cout<<"\nMarks:\n";
	for(int i=0;i<N;i++)
		cout<<" "<<mrk[i];
		cout<<"\ntotal:"<<total();
		cout<<"\nAvg:"<<avg();
}

int main()
{
	Result a;
	a.setResult();
	a.display();
	Result b;
	b.setResult(15);
	b.display();
	return 0;
}