#include<iostream>
using namespace std;
struct employee
{
	string name;
	union
	{
		int grade;
	};
};
int main(void)
{
	employee e;
	e.name="SelvaGanesh";
	e.grade=12;
	cout<<"Name : "<<e.name<<endl;
	cout<<"Grade : "<<e.grade<<endl;
	return 0;
}