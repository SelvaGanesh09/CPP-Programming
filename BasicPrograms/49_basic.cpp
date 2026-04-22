//using dynamic memory  allocation for structure
#include<iostream>
using namespace std;
struct Employee
{
	string name;
	int age;
	double salary;
};
void inputDetails(struct Employee*);
void show(struct Employee*);
int main()
{
	struct Employee *emp1;

	emp1=new struct Employee;

	inputDetails(emp1);
	show(emp1);

	delete emp1;

	show(emp1);
	return 0;
}
void inputDetails(struct Employee *obj)
{
	cout<<"Enter your name : ";
	cin>>obj->name;
	cout<<"Enter your age : ";
	cin>>obj->age;
	cout<<"Enter your salary : ";
	cin>>obj->salary;

	cout<<endl;
}
void show(struct Employee *obj)
{
	cout<<"name  : "<<obj->name<<endl;
	cout<<"Age	 : "<<obj->age<<endl;
	cout<<"Salary: "<<obj->salary<<endl;
}