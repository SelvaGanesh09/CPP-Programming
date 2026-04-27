/*
---Data Convertions in C++---
	* Conversion between built-in-types.
	* Conversion between built-in and user-defined types.
	* Conversion between different user-defined types.
*/
//Conversion between built-in-types
#include<iostream>
using namespace std;
int main()
{
	float a=30;//int to double==> Widening
	double b=1.55f;//float to double==>Widenng
	int c=int(3.14);//double to int==>Narrowing
	float d=float(6.28);//double to float==>Narrowing

	cout<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	return 0;
}