#include<iostream>
#include "Employee.h"
using namespace std;
Employee::Employee()
{
    name="NONE";
    age=0;
}
Employee::Employee(string name,int age)
{
    this->name=name;
    this->age=age;
}
void Employee::getData(string name,int age)
{
    this->name=name;
    this->age=age;
}
void Employee::showData()
{
    cout<<"Name : "<<name<<endl;
    cout<<"Age  : "<<age<<endl;
}