#include<iostream>//input output
#include<conio.h>//clrscr
#include<stdio.h>//gets
using namespace std;

struct addr{
	int houseNumber;
	char area[26];
	char city[26];
	char state[26];
	
};
struct emp{
	int empNumber;
	char name[20];
	char desig[16];
	addr address;
	float basic;
} worker; //declaraed variable 



int main(){
	struct emp worker;
	
	
	cout<<endl<<"Enter Empolyee no:"<<endl;
	cin>>worker.empNumber;
	cout<<endl<<"Enter Empolyee Name:"<<"\n";	
	getchar();
	gets(worker.name);
	cout<<endl<<"Designation:"<<endl;
	getchar();
	gets(worker.desig);
	cout<<endl<<"Enter Address:"<<endl;
	cout<<endl<<"House No:"<<endl;
	getchar();
	cin>>worker.address.houseNumber;
	cout<<endl<<"Enter Area:"<<endl;
	getchar();
	gets(worker.address.area);
	cout<<endl<<"Enter City:"<<endl;
	getchar();
	gets(worker.address.city);
	cout<<endl<<"Enter State"<<endl;
	getchar();
	gets(worker.address.state);
	cout<<endl<<"Enter Basic Pay"<<endl;
	cin>>worker.basic;
	
	
	
return 0;
};
