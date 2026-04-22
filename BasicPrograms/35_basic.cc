#include<iostream>
using namespace std;
class Example
{
    public:
        Example()
        {
            cout<<"This is a Constructor"<<endl;
        }
        ~Example()
        {
            cout<<"This is a Destructor"<<endl;
        }
};
int main()
{
    Example obj1;
    cout<<"This is main function"<<endl;
    return 0;
}