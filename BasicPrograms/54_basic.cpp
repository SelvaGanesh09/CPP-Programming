#include<iostream>
using namespace std;
class Sample
{
public:
	Sample()
	{
		cout<<"Default constructor"<<endl;
	}
	Sample(Sample &e)
	{
		cout<<"Copy constructor"<<endl;
	}
	Sample& operator=(Sample &obj)
	{
		cout<<"Overloaded = Function"<<endl;
		return obj;
	}
};
int main()
{
	Sample obj1,obj2;
	obj1=obj2;

	Sample obj3=obj1;
	return 0;
}