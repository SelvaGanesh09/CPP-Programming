#include<iostream>
using namespace std;
const char *fun();
int main()
{
	const char *str;
	str=fun();
	cout<<str;
	return 0;
}
const char *fun()
{
	return "Hello, World!";
}