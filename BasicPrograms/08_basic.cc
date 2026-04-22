#include<iostream>
using namespace std;
int main(void)
{
	int i=10;
	int &j=i;
	cout<<"Value of I : "<<i<<endl;
	cout<<"Value of J : "<<j<<endl;
	i=20;
	cout<<"Value of I : "<<i<<endl;
	cout<<"Value of J : "<<j<<endl;
	j=30;
	cout<<"Value of I : "<<i<<endl;
	cout<<"Value of J : "<<j<<endl;
	return 0;
}