#include<iostream>
using namespace std;
int main(void)
{
	char *p="Hello";//pointer is variable, string is constant
	*p='M';//error
	p="Bye";//works

	const char *q="Hello";//pointer is variable, string is constant
	*q='M';//error
	q="Bye";//works

	char const *s="Hello";//pointer is variable, string is constant
	*s='M';//error
	s="Bye";//works

	char* const t="Hello";//pointer is constant, so is string
	*t='M';//works
	t="Bye";//error

	const char* const u="Hello";//string is constant, so is pointer
	*u='M';//error
	u="Bye";//error
	return 0;
}