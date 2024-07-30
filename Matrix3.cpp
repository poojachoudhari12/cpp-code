#include<iostream>
using namespace std;

class Matrix3
{
	int x[3][3];
	public:
		Matrix3();
		Matrix3(Matrix3&);
		~Matrix3(){}
		void setData();
		void display();
		Matrix3 add(Matrix3 &);
		Matrix3 sub(Matrix3 &);
		Matrix3 mul(Matrix3 &);
		
};
Matrix3::Matrix3() 
{
	int i,j;
	for( i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		x[i][j]=0;
	}
}
Matrix3::Matrix3(Matrix3 &t)
{
	int i,j;
	for(int i;i<3;i++)
	{
		for(j=0;j,3;j++)
		x[i][j]=t.x[i][j];
	}
}
void Matrix3::setData()
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

void Matrix3::display()
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

Matrix3 Matrix3::add(Matrix3 &t)
{
	Matrix3 q;
	int i=0,j=0;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			q.x[i][j]=x[i][j]+t.x[i][j];
			
		}
		return q;

}
Matrix3 Matrix3::sub(Matrix3 &t)
{
	Matrix3 q;
	int i=0,j=0;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			q.x[i][j]=x[i][j]-t.x[i][j];
			
		}
		return q;
}

Matrix3 Matrix3::mul(Matrix3 &t)
{
	Matrix3 q;
	int i=0,j=0,k=0;
	for(i=0;i<3;i++)
	{
			for(j=0;j<3;j++)
			{
			q.x[i][j]=0;
			for(k=0;k<3;k++)
			q.x[i][j]+=(x[i][k]*t.x[k][j]);
		}

	}
	return q;
}
int main()
{
	Matrix3 a,b,c;
	a.setData();
	b.setData();
	c=a.add(b);
	a.display();
	b.display();
	c.display();
	return 0;
}
