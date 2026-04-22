#include<iostream>
using namespace std;
int main(void)
{
	int a=20;
	const int b=30;
	cout<<a<<" "<<b<<endl;
	a=10;
	//b=10;
	cout<<a<<" "<<b<<endl;
	return 0;
}