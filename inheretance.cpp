//herechical inheretance
#include<iostream>
#define N 5
using namespace std;
class Array
{
	protected:
		int x[5];
		public:
			Array();
			~Array(){}
			void SetData();
			void display();

};
Array::Array()
{
	for(int i=0;i<N;i++)
		x[i]=0;
}
void Array::SetData()
{
	cout<<"\ndata:";
	for(int i=0;i<N;i++)
	cin>>x[i];
}
void Array::display()
{
	cout<<"\nData:";
	for(int i=0;i<N;i++)
	cout<<" "<<x[i];
	
}
class Array2:public Array
{
	public:
		Array2():Array()
		{}
		~Array2(){}
		void reverse();
		void findrepl(int sv,int rv);
};
void Array2::reverse()
{
	int i=0,j=N-1,temp;
	while(i<j)
	{
		temp=x[i];
		x[i]=x[j];
		x[j]=temp;
		i++,j--;
	}
}

void Array2::findrepl(int sv,int rv)
{
	for(int i=0;i<N;i++)
	{
		if(x[i]==sv)
		x[i]=rv;
	}
}
class Array3:public Array
{
	public:
		Array3():Array()
		{}
		~Array3(){}
		int total();
		int avg(){
			return total()/N;
		}
};
int Array3::total()
{
	int tot=x[0],i=1;
	while(i<N)
	{
		tot+=x[i++];
	}
	return tot;
}
int main()
{
	Array2 x;
	x.SetData();
	x.display();
	x.reverse();
	x.display();
	x.findrepl(17,29);
	x.display();
	Array3 y;
	y.SetData();
	y.display();
	cout<<"\nTotal:"<<y.total();
	cout<<"\nAvg:"<<y.avg();
	
	
	return 0;
}