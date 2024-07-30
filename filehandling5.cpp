//prg to read txt file
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream sin("stu1.tx");
	if(!sin)
	{
		cout<<"\nfile not found";
		return 0;
	}
	int no;
	double mrk;
	char nm[15];
	while(1)
	{
		sin>>no>>nm>>mrk;
		if(sin.eof())
		break;
		cout<<"\nRoll no:"<<no<<"\nName:"<<nm<<"\nMarks:"<<mrk;
		
	}
	sin.close();
	return 0;
}