#include<iostream>
using namespace std;
int main(void)
{
	auto age0=18;
	auto age1=age0;
	decltype(age1) age2;
	age2=10;
	cout<<age0<<endl;
	cout<<age1<<endl;
	cout<<age2<<endl;
	return 0;
}