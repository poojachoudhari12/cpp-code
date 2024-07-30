#include<iostream>
#include"stu.h"
#include<fstream>
using namespace std;

int main()
{
	stu s;
	int no;
	ifstream sin;
	sin.open("stu.dat",ios::in|ios::binary);
	while(1)
	{
		
		sin.read((char*)&s,sizeof(stu));
		if(sin.eof())
		break;
		s.display();
	}
	sin.close();
	return 0;
}