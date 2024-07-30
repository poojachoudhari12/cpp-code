//write a prg to copy source file abc.txt with new namme pqr.txt

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream in("abc.txt");
	char ch;
	ofstream out("pqr.txt");
	while(1)
	{
		in>>ch;
		if(in.eof())
		
			break;
			cout<<ch;
	
	
	}
		in.close();
		out.close();
		return 0;
}