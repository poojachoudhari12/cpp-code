//ofstream=class obj is used to write
//ifstream=class obj is used to read
//fstream=class obj is used to 

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream out("abc.txt");
	char ch;
	cout<<"\nType a character:";
	while(1)
	{
		cin>>ch;
		if(ch=='#')
		
			break;
			out<<ch;
	
	
	}
		out.close();
		return 0;
}



