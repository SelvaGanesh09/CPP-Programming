#include<iostream>
using namespace std;
int num=15;
int main(void)
{
	int num=10;
	cout<<"Local : "<<num<<endl;
	cout<<"Global : "<<::num<<endl;
	::num=20;
	cout<<"Local : "<<num<<endl;
	cout<<"Global : "<<::num<<endl;
	num=30;
	cout<<"Local : "<<num<<endl;	
	cout<<"Global : "<<::num<<endl;	
	return 0;
}