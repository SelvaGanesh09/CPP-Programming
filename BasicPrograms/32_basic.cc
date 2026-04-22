#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int len,brd;
	public:
		void get_rec_val();
		void set_value(int,int);
		void display_data();
		void areaRec();

};
int main()
{
	Rectangle obj1;
	obj1.get_rec_val();
	obj1.display_data();
	obj1.areaRec();
	cout<<endl<<endl;
	obj1.set_value(20,60);
	obj1.display_data();
	obj1.areaRec();
	return 0;
}
void Rectangle::get_rec_val()
{
	cout<<"Enter a length : ";
	cin>>len;
	cout<<"Enter a breadth : ";
	cin>>brd;
}
void Rectangle::set_value(int a,int b)
{
	len=a;
	brd=b;
}
void Rectangle::display_data()
{
	cout<<"Length : "<<len<<endl;
	cout<<"Breadth : "<<brd<<endl;
}
void Rectangle::areaRec()
{
	int area;
	area=len*brd;
	cout<<"Area of rectangle is "<<area<<endl;
}