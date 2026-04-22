//Static member and Function
#include<iostream>
using namespace std;
class Rectangle
{
private:
	int len,brd;
	static int count;
public:
	Rectangle();
	void area(int a,int b);
	static void showCount();
};
int Rectangle::count=0;
int main()
{
	Rectangle rec1;
	rec1.area(10,20);
	Rectangle::showCount();cout<<endl;

	Rectangle rec2,rec3,rec4;
	Rectangle::showCount();cout<<endl;

	Rectangle *rec5;
	Rectangle::showCount();cout<<endl;

	rec5=new Rectangle();
	Rectangle::showCount();
	return 0;
}
Rectangle::Rectangle()
{
	len=brd=0;
	count++;
}
void Rectangle::area(int a,int b)
{
	len=a;
	brd=b;
	int area = len*brd;
	cout<<"The area is "<<area<<endl;
}
void Rectangle::showCount()
{
	cout<<"The number of objects created "<<count<<endl;
}