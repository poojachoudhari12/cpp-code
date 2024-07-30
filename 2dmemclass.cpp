#include<iostream>
using namespace std;

class Matrix1
{
	int x[3][3];
	public:
		Matrix1 ();
		Matrix1(Matrix1 &);
		~Matrix1(){}
		void setData();
		void display();
};

Matrix1::Matrix1()
{
	int i,j;
	for( i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		x[i][j]=0;
	}
}
Matrix1::Matrix1(Matrix1 &t)
{
	int i,j;
	for(int i;i<3;i++)
	{
		for(j=0;j,3;j++)
		x[i][j]=t.x[i][j];
	}
}
void Matrix1::setData()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>x[i][j];
		}
	}
}

void Matrix1::display()
{
	cout<<"\nMatrix\n";
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cout<<x[i][j]<<" ";
			cout<<"\n";
	}
}


int main()
{
	Matrix1 p;
	p.display();
	p.setData();
	p.display();
	return 0;
}
