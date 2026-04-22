#include<iostream>
using namespace std;
class Example
{
    public:
       Example();
       ~Example(); 
};
int main()
{
    Example obj1;
    cout<<"This is main function"<<endl;
    return 0;
}
Example::Example()
{
    cout<<"This is a Constructor"<<endl;
}
Example::~Example()
{
    cout<<"This is a Destructor"<<endl;
}