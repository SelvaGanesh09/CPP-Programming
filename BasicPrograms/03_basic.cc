#include<iostream>
using namespace std;
int main(void)
{
	char name[50];
	int m1,m2,m3,tot;
	cout<<"Enter your name : ";
	cin>>name;
	cout<<"Enter m1 mark : ";
	cin>>m1;
	cout<<"Enter m2 mark : ";
	cin>>m2;
	cout<<"Enter m3 mark : ";
	cin>>m3;
	tot=m1+m2+m3;
	cout<<"Name : "<<name;
	cout<<"Total : "<<tot;
	return 0;
}