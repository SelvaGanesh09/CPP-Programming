#include<iostream>
using namespace std;
void add(int,int);
void add(float,float);
void add(double,double);
int main()
{
	add(5,3);
	add(5.5,3.5);
	add(5.5f,3.5f);
	return 0;
}
void add(int a,int b)
{
	cout<<"Sum : "<<a+b<<endl;
}
void add(double a,double b)
{
	cout<<"Sum double : "<<a+b<<endl;
}
void add(float a,float b)
{
	cout<<"Sum float : "<<a+b<<endl;
}