#include<iostream>
using namespace std;
class Result
{
	int no;
	int mrk;
	public:
		Result()
		{
			no=0;
			mrk=0;
		}
		~Result(){}
		friend istream &operator>>(istream &in,Result &t)
		{
			cout<<"\nRoll No:";
			in>>t.no;
			cout<<"\nMarks:";
			in>>t.mrk;
			return in;
		}
		friend ostream & operator<<(ostream &out,Result &t)
		{
			out<<"\nRoll No:"<<t.no<<"\nMarks:"<<t.mrk;
			return out;
		}
};
int main()
{
	Result x;
	cin>>x;
	cout<<x;
	return 0;
}