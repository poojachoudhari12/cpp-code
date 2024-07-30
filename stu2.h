//

#inlucude<stdio.h>
#include<stu.h>
#include<fstream>
using namespace std;

void main()
{
	stu s;
	int no;
	ofstream sout;
	sout.open("stu.det",ios::out/ios::binary);
	while(1)
	{
		cout<<"\nRoll no:";
		cin>>no;
		if(no==0)
		break;
		s.setData(no);
		sout.write((char*)&s,(sizeof(*stu));
	}
	sout.close();
	return 0;
}