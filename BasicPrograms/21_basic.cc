#include<iostream>
using namespace std;
int main()
{
	const char *str1="CodeRuns@CPU\0";
	const char *&str2=str1;
	cout<<str1<<" "<<str2<<endl;
	str1="Program\0";
	cout<<str1<<" "<<str2<<endl;
	return 0;
}