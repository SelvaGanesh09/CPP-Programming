#include<iostream>
using namespace std;
class Circle
{
private:
	int radius;
	float x,y;
public:
	Circle();
	Circle(int,float,float);
	Circle(Circle&);
	Circle& operator=(Circle&);
	void showData();
};
int main()
{
	Circle c1(10,2.5f,2.5f);

	Circle c2,c3;

	c3=c2=c1;

	Circle c4=c1;

	c1.showData();
	c2.showData();
	c3.showData();
	c4.showData();

	return 0;
}
Circle::Circle(){cout<<"Default constructor invoked"<<endl;}
Circle::Circle(int a,float b,float c)
{
	cout<<"Parameterized constructor invoked"<<endl;
	radius=a;
	x=b;
	y=c;
}
Circle::Circle(Circle &obj)
{
	cout<<"Copy constructor invoked"<<endl;
	radius=obj.radius;
	x=obj.x;
	y=obj.y;
}
Circle& Circle::operator=(Circle &obj)
{
	cout<<"Operator= Function invoked"<<endl;
	radius=obj.radius;
	x=obj.x;
	y=obj.y;
	return *this;
}
void Circle::showData()
{
	cout<<endl;
	cout<<"Radius	: "<<radius<<endl;
	cout<<"X		: "<<x<<endl;
	cout<<"Y		: "<<y<<endl;
	cout<<endl;
}