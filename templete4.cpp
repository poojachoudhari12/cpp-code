//template class

#include<iostream>
#include<string.h>
using namespace std;

template<class Q>
class myclass
{
	Q var;
	public:
		void setData()
		{
			cout<<"\nData:";
			cin>>var;
		}
		void display()
		{
			cout<<"\nData:"<<var;
		}
};
int main()
{
	myclass<int>p;
	p.setData();
	p.display();
	myclass<double>q;
	q.setData();
	q.display();
	return 0;
}