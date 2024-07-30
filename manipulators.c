#include<iostream>
using namespace std;

int main()
{
	cout<<" "setw(4)<<32<<" "<<setw(15)<<setiosflags(ios::left)
	<<"pradip"<<resetiosflags(ios::left)<<" "
	<<setw(5)<<setfill('#')<<setprecision(2)<<9.28
	<<setfill(32)<<endl;
	
	cout<<" "setw(4)<<84<<" "<<setw(15)<<setiosflags(ios::left)
	<<"sudhir"<<resetiosflags(ios::left)<<" "
	<<setw(6)<<setfill('#')<<setprecision(2)<<8.23
	<<setfill(32)<<endl;
	return 0;
}