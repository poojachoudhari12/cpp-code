#include<iostream>
using namespace std;
class Result
{
	int rno;
	int mrk[5];
	public:
		Result();
		Result(Result&);
		~Result(){}
		friend istream& operator>>(istream&,Result&);
		friend ostream& operator<<(ostream&,Result&);
		int operator>(Result &t)
		{
			return(rno>t.rno);
				}		
		int operator<(Result &t)
		{
			return(rno<t.rno);
				}
		int operator==(Result &t)
		{
			return(rno==t.rno);
		}
		int total();
		int avg(){
		return total()/5;
		}
		int operator>(int z)
		{
			return (total()>z);
		}	
		int operator<(int z)
		{
			return (total()<z);
		}
		
};
Result::Result()
{
	rno=0;
	for(int i=0;i<5;i++)
	mrk[i]=0;
	
}
int Result::total()
{
	int tot=mrk[0],i=1;
	while(i<5)
	{
		tot+=mrk[i];
		i++;
	}
	return tot;
}
Result:: Result(Result &t)
{
	rno=t.rno;
	for(int i=0;i<5;i++)
	mrk[i]=t.mrk[i];
}
istream& operator>>(istream& in ,Result &t)	
{
	cout<<"\nRoll no:";in>>t.rno;
	cout<<"\nMarks:\n";
	for(int i=0;i<5;i++)
	in>>t.mrk[i];
	return in;
		}	
ostream& operator<<(ostream& out ,Result &t)	
{
	out<<"\nRoll no:";out<<t.rno;
	out<<"\nMarks:\n";
	for(int i=0;i<5;i++)
	out<<" "<<t.mrk[i];
	out<<"\ntotal:"<<t.total();
	out<<"\navg:"<<t.avg();
	return out;
}
/*int main()
{
	Result P;
	cin>>P;
	cout<<P;
	return 0;
}*/

/*int main()
{
Result P,Q;
cin>>P>>Q;
if(P>Q)
cout<<P;
else
cout<<Q;
return 0;
}*/

//sorting of array of class type result
int main()
{
	Result a[5];
	Result b;
	int i=0,j,pos;	
	while(i<5)
	{
		cin>>a[i];
		i++;
	}
	cout<<"\nBefore  sorting\n";
	for(i=0;i<5;i++)
	cout<<a[i];
	for(i=0;i<4;i++)
	{
		pos=i;
		for(j=i+1;j<5;j++)
		{
		if(a[j]<a[pos])
		pos=j;
		}
		if(i!=pos)
		{b=a[i];
		a[i]=a[pos];
		a[pos]=b;
		}
	}
	cout<<"\nAfter sorting:\n";
	for(i=0;i<5;i++)
	cout<<a[i];
	
}
																																																