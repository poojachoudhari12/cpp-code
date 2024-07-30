#include<iostream>
using namespace std;
#define M 5
class stack
{
	int arr[5];
	int top;
	public:
		stack()
		{
			top=-1;
		}
		~stack(){}
		void push(int d)
		{
			if(top==M-1)
				cout<<"\noverflow";
			else
			{
				top++;
				arr[top]=d;
			}
		}
		void pop()
		{
			if(top==-1)
			cout<<"\nUnder flow";
			else
			top--;
		}
		int isfull()
		{
			return(top==M-1);
		}
		int isEmpty()
		{
			return(top==-1);
		}
		void display();
		void menu();		
};

void stack::display()
{
	if(isEmpty())
	cout<<"\nEmpty stack";
	else
	{
		cout<<"\nstack data\n";
		for(int i=top;i>=0;i--)
		cout<<" "<<arr[i];
	}
}
void stack::menu()
{
	int opt,d;
	while(1)
	{
		cout<<"\nstack\n1.push\n2.pop\n3.display\n4.exit\noption:";
		cin>>opt;
		if(opt>3)
		break;
		switch(opt)
		{
			case 1:
				cout<<"\nData:";
				cin>>d;
				push(d);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
					
		}
	}
}
int main()
{
	stack S;
	S.menu();
	return 0;
}