#include<iostream>
using namespace std;
class Number
{
	int no;
	public:
		void setData()
		{
			cout<<"\nEnter no:";
			cin>>no;
		}
		void display()
		{
			cout<<"\nNo:"<<no;
		}
		friend void update(Number &t,int);
};

void update(Number &t,int val)
{
	t.no=t.no+val;
}

int main()
{
	Number k;
	k.setData();
	k.display();
	update(k,4);
	k.display();
	return 0;
}