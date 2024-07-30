//prg to read file abc.txt
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream in("abc.txt");
	char ch;
	cout<<"\nData:\n";
	while(1)
	{
		in>>ch;
		if(in.eof())
		
			break;
			cout<<ch;
	
	
	}
		in.close();
		return 0;
}