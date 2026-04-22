#include<iostream>
using namespace std;
struct employee
{
	char name[50];
	int age;
	float salary;
};
employee &fun(employee&);
int main(void)
{
	employee obj1={"Ganesh\0",12,10000.00f};
	employee obj2;
	fun(obj1)=obj2;
	//Prints Garbage values
	cout<<obj2.name<<endl;
	cout<<obj2.age<<endl;
	cout<<obj2.salary<<endl;
	return 0;
}
employee &fun(employee &obj1)
{
	return obj1;
}