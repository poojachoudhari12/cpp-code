//prg to create a text file cotaining a txt record

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream sout("stu.tx");
	int no;
	double mrk;
	char nm[15];
	while(1)
	{
		cout<<"\nRoll no:";
		cin>>no;
		if(no==0)
		break;
		cout<<"\nName:";
		cin>>nm;
		cout<<"\nMarks:";
		cin>>mrk;
		sout<<no<<" "<<nm<<" "<<mrk<<"\n";
	}
	sout.close();
}