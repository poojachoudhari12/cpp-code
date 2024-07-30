#include<iostream>
using namespace std;

class Matrix2
{
	int x[3][3];
	public:
		Matrix2();
		Matrix2(Matrix2&);
		~Matrix2(){}
		void setData();
		void display();
		void add(Matrix2 &,Matrix2 &);
		void sub(Matrix2 &,Matrix2 &);
		void mul(Matrix2 &,Matrix2 &);
};
Matrix2::Matrix2() 
{
	int i,j;
	for( i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		x[i][j]=0;
	}
}
Matrix2::Matrix2(Matrix2 &t)
{
	int i,j;
	for(int i;i<3;i++)
	{
		for(j=0;j,3;j++)
		x[i][j]=t.x[i][j];
	}
}
void Matrix2::setData()
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

void Matrix2::display()
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
void Matrix2::add(Matrix2 &p,Matrix2 &q)
{
	int i=0,j=0;
	while(i<3)
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			x[i][j]=p.x[i][j]+q.x[i][j];
			i++;
		}
	}
}
void Matrix2::sub(Matrix2 &p,Matrix2 &q)
{
	int i=0,j=0;
	while(i<3)
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			x[i][j]=p.x[i][j]-q.x[i][j];
			i++;
		}
	}
}
void Matrix2::mul(Matrix2 &p,Matrix2 &q)
{
	int i=0,j=0,k=0;
	while(j<3)
	{
			for(j=0;j<3;j++)
			{
			x[i][j]=0;
			for(k=0;k<3;k++)
			x[i][j]+=(p.x[i][j]*q.x[i][j]);
		}
		i++;
	}
}

int main()
{
	Matrix2 a,b,c;
	a.setData();
	b.setData();
	c.add(a,b);
	a.display();
	b.display();
	c.display();
	return 0;
}
