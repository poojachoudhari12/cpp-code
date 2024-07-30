#include<iostream>
using namespace std;
#define M 5
class Queue
{
	int arr[5];
	int rr,fr;
	public:
		queue()
		{
			rr=-1;
			fr=0;
		}
		~Queue(){}
		void insert(int d)
		{
			if(rr==M-1)
				cout<<"\noverflow";
			else
			{
				rr++;
				arr[rr]=d;
			}
		}
		void remove()
		{
			if(rr<fr)
			cout<<"\nUnder flow";
			else
			fr++;
		}
		int isEmpty()
		{
			return(rr<fr);
		}
		int isfull()
		{
			return(rr==M-1);
		}		
		void display();
		void menu();		
};

void Queue::display()
{
	if(isEmpty())
	cout<<"\nEmpty queue";
	else
	{
		cout<<"\nQueue data\n";
		for(int i=fr;i<=rr;i--)
		cout<<" "<<arr[i];
	}
}
void Queue::menu()
{
	int opt,d;
	while(1)
	{
		cout<<"\nQueue\n1.insert\n2.remove\n3.display\n4.exit\noption:";
		cin>>opt;
		if(opt>3)
		break;
		switch(opt)
		{
			case 1:
				cout<<"\nData:";
				cin>>d;
				insert(d);
				break;
			case 2:
				remove();
				break;
			case 3:
				display();
				break;
					
		}
	}
}
int main()
{
	Queue S;
	S.menu();
	return 0;
}		