#include<iostream>
using namespace std;
struct employee
{
	char name[50];
	int age;
	float salary;
};
void printV(employee);
void printA(employee*);
void printR(employee&);
int main(void)
{
	employee e={"Ganesh\0",12,1000.00};
	printV(e);
	printA(&e);
	printR(e);
	return 0;
}
void printV(employee e)
{
	cout<<e.name<<endl;
	cout<<e.age<<endl;
	cout<<e.salary<<endl;
}
void printA(employee *e)
{
	cout<<e->name<<endl;
	cout<<e->age<<endl;
	cout<<e->salary<<endl;
}
void printR(employee &e)
{
	cout<<e.name<<endl;
	cout<<e.age<<endl;
	cout<<e.salary<<endl;
}