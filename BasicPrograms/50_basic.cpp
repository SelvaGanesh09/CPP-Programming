//Using dynamic allocation in Objects.
#include<iostream>
using namespace std;
class Sample
{
public:
	Sample();
	void show();
	~Sample();
};
int main()
{
	Sample *obj;

	cout<<"This is a main Function"<<endl;

	obj=new Sample();
	obj->show();
	delete obj;

	cout<<"This is a Main Function"<<endl;
	return 0;
}
Sample::Sample()
{
	cout<<"Constructor Called"<<endl;
}
void Sample::show()
{
	cout<<"Class and Objects"<<endl;
}
Sample::~Sample()
{
	cout<<"Destructor Called"<<endl;
}