#include<iostream>
using namespace std;
void swapV(int,int);
void swapA(int*,int*);
void swapR(int&,int&);
int main(void)
{
	int a,b;
	a=10;
	b=20;
	swapV(a,b);
	cout<<"A : "<<a<<" || B : "<<b<<endl;
	a=10;
	b=20;
	swapA(&a,&b);
	cout<<"A : "<<a<<" || B : "<<b<<endl;
	a=10;
	b=20;
	swapR(a,b);
	cout<<"A : "<<a<<" || B : "<<b<<endl;
	return 0;	
}
void swapV(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void swapA(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void swapR(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
