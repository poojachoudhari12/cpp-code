#include<iostream>
using namespace std;

class bday
{
	int day,mon,yr;
	long int toNumber()
	{
		long int z=day+(32*mon)+(512*(yr-1980));
		return z;
	}
	public:
		bday(){day=mon=yr=0;}
		bday(int d,int m,int y)
		{
			day=d;
			mon=m;
			yr=y;
			
		}
		bday(bday &t)
		{
			day=t.day;
			mon=t.mon;
			yr=t.yr;
		}
		~bday(){}
		void display()
		{
			cout<<day<<":"<<mon<<":"<<yr<<"\n";
		}
		int isless(bday &t)
		{
			return toNumber()<t.toNumber();
		}
};
int main()
{
	bday a(8,7,2002);
	bday b(7,7,2002);
	a.display();
	b.display();
	if(a.isless(b))
	a.display();
	else
	b.display();
return 0;	
}