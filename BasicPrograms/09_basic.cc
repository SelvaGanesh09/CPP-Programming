#include<iostream>
using namespace std;
int main(void)
{
	const char *name="Ganesh\0";
	const char *&copy=name;
	cout<<"Name : "<<name<<endl;
	cout<<"Copy : "<<copy<<endl;
	return 0;
}