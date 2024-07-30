#include<iostream>
using namespace std;

class Number
{
	int x,y;
	void swap();
	
	public:
	void setData()
	{
		cout<<"\nx:";
		cin>>x;
		cout<<"\ny:";
		cin>>y;
		}	
	void setData(int a)
	{
		x=y=a;
		}	
	void setData(int x,int y)
	{
		this->x=x;
		this->y=y;
		}	
	void setData(Number &t)
	{
		x=t.x;
		y=t.y;
		}	
	void display()
	{
		cout<<"\nx:"<<x;
		cout<<"\ny:"<<y;
		}
	void callswap()
	{
		swap();
	}
	Number add(Number &t)
	{
		Number k;
		k.x=x+t.x;
		k.y=y+t.y;
		return k;
			}
		Number sub(Number &t)
	{
		Number k;
		k.x=x-t.x;
		k.y=y-t.y;
		return k;
			}						
	void setx(int a)
	{
		x=a;
		}	
		void sety(int a)
	{
		y=a;
		}
	int getx()
	{
		return x;
				}	
	int gety()
	{
		return y;
				}						
};

int main()
{
	Number a,b,c;
	a.setData();
	a.display();
	b.setData();
	b.display();
	c=a.add(b);
	c.callswap();
	c.display();	
	return 0;
	
}