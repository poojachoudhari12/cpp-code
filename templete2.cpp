#include<iostream>
using namespace std;
class stu
{
	int no;
	char nm[15];
	public:
		stu(){
			no=0;
			nm[0]='\0';
		}
		~stu(){}
		friend istream& operator>>(istream &in,stu &s)
		{
			cout<<"\nRoll No:";
			cin>>s.no;
			cout<<"\nNmae:";
			cin>>s.nm;
			return in;
		}
		friend ostream& operator<<(ostream &out,stu &s)
		{
			cout<<"\nRoll No:"<<s.no<<"\nName:"<<s.nm;
			return out;
		}
};
template<class T>
void display(T &var)
{
	cout<<"\nData:"<<var;
}
template<class P>
void input(P &var)
{
	cout<<"\ndata:";
	cin>>var;
}
int main()
{
	int x;
	input(x);
	display(x);
	stu y;
	input(y);
	display(y);
		return 0;
}