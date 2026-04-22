//Operator Overloading
#include<iostream>
using namespace std;
struct complex
{
	double real,img;
};
complex set_complex(double,double);
void print_complex(complex);
complex operator+(complex c1,complex c2)
{
	complex x;
	x.real=c1.real+c2.real;
	x.img=c1.img+c2.img;
	return x;
}
int main()
{
	complex a,b,c,d;
	a=set_complex(1.0,1.0);
	b=set_complex(1.0,1.0);
	c=a+b;
	d=a+b+c;
	print_complex(d);
	return 0;
}
complex set_complex(double r,double i)
{
	complex x;
	x.real=r;
	x.img=r;
	return x;
}
void print_complex(complex x)
{
	cout<<x.real<<" "<<x.img<<endl;
}