/*
default compiler assigned : 
	* Overloaded =
	* Copy Constructor
*/
#include<iostream>
using namespace std;
class Sample
{
public:
	Sample()
	{
		cout<<"Default constructor"<<endl;
	}
};
int main()
{
	Sample obj1,obj2;// default constructor called
	obj1=obj2; //overloaded = function called

	Sample obj3=obj1;//Copy constructor called
	return 0;
}