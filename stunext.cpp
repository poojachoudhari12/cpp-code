#include<iostream>
#include<fstream>
using namespace std;

class Account
{
	int acno;
	char acnm[15];
	int acbal;
	int acstate;
	public:
		Account()
		{
			acno=acbal=0;
			acstate=1;
			acnm[0]='\0';
		}
		~Account(){}
		void setData(int n);
		void display();
		int getState(){
		return acstate;}
		int getNo()
		{
			return acno;
		}
		int getbal()
		{
			return acbal;
		}
		char *getname()
		{
			return acnm;
		}
		void delRecord()
		{
			 acstate=0;
		}
}ac;

void Account::setData(int n)
{
	acno=n;
	cout<<"\nName:";
	cin>>acnm;
	cout<<"\nopening balence:";
	do{
		cin>>acbal;
		if(acbal>500)
		break;
		
	}while(1);
	acstate=1;
}

void Account::display()
{
	cout<<"\nAc Data:\nNo:"<<acno<<"\nName:"<<acnm<<"\nbal:"<<acbal<<"\nstate:"<<acstate;
}

class AccAMD
{
	fstream fa;
	public:
		AccAMD();
		~AccAMD(){
			fa.close();
		}
		int search(int);
		void Add();
		void Mod();
		void Del();
		void display();
		void Menu();
};
AccAMD::AccAMD()
{
	ifstream in;
	in.open("acc.dat",ios::out|ios::binary);
	if(!in)
	{
		ofstream out;
		out.open("acc.dat",ios::out|ios::binary);
		out.close();
	}
	else
		in.close();
		fa.open("acc.dat",ios::in|ios::out|ios::binary);
}

int AccAMD::search(int no)
{
	int pos=0;
	fa.seekg(0,ios::beg);//shift get ptr at byte 0 from bof
	while(1)
	{
		fa.read((char*)&ac,sizeof(Account));
		if(fa.eof())//reacord not found
		{
			pos=-1;
			fa.clear();//unclock the locked file
			break;
		}
		if(ac.getNo()==no)//Record found
		break;
		pos=fa.tellg();//tell  present get ptr position in byte
	}
	return pos;
}

void AccAMD::Add()
{
	int no;
	cout<<"\nA/c No:";
	cin>>no;
	int pos=search(no);
	if(pos>=0)//record found
	{
		cout<<"\nRecord found:";
		return ;
	}
	ac.setData(no);
	fa.seekp(0,ios::end); //set put pointer at byte 0 from end of file
	fa.write((char*)&ac,sizeof(ac));
}

void AccAMD::Mod()
{
	int no;
	cout<<"\nA/c No:";
	cin>>no;
	int pos=search(no);
	if(pos==-1||ac.getState()==0)//record found
	{
		cout<<"\nRecord not found/deleted:";
		return ;
	}
	ac.setData(no);
	fa.seekp(pos,ios::beg); //set put pointer at byte pos from begin of file
	fa.write((char*)&ac,sizeof(ac));
}

void AccAMD::Del()
{
	int no;
	cout<<"\nA/c No:";
	cin>>no;
	int pos=search(no);
	if(pos==-1||ac.getState()==0)//record found
	{
		cout<<"\nRecord not found/deleted:";
		return ;
	}
	ac.delRecord();
	fa.seekp(pos,ios::beg); //set put pointer at byte pos from begin of file
	fa.write((char*)&ac,sizeof(ac));
}

void AccAMD::display()
{

	fa.seekg(0,ios::beg);
	while(1)
	{
		fa.read((char*)&ac,sizeof(ac));
		if(fa.eof())
		{
			fa.clear();//unlock the file
			break;
		}
		ac.display();
	}
}
void AccAMD::Menu()
{
	int opt,pos;
while(1)
{
	cout<<"\nMenu:\n1.Add:\n2.mod:\n3.Del:\n4.display:\n5.search:\n6.exit\noption:";
	cin>>opt;
	if(opt>5)
	break;
	switch(opt)
	{
		case 1:
			Add();break;
		case 2:
			Mod();
			break;
		case 3:
			Del();
			break;
		case 4:
			display();
			break;
		case 5:
			cout<<"\nA/c No:";
			int no;
			cin>>no;
			if(pos==-1)
			cout<<"\nInvalide a/n ";
			else
				ac.display();					
	}
	}
}
int main()
{
	AccAMD p;
	p.Menu();
	return 0;
}


