#include<iostream>
using namespace std;
class Weight
{
    private:
        int kg;
    public:
        Weight operator ++();
        Weight operator ++(int);
        Weight();
        void printWeight();
};
int main()
{
    Weight obj1,obj2;
    ++obj1;
    obj1.printWeight();
    obj2=++obj1;
    obj1.printWeight();
    obj2.printWeight();
    obj1=obj2++;//This wont work as you expected
    obj1.printWeight();
    obj2.printWeight();
    return 0;
}
Weight Weight::operator ++()
{
    kg++;
    return *this;
}
Weight Weight::operator ++(int)
{
    kg++;
    return *this;
}
void Weight::printWeight()
{
    cout<<"Weight in age : "<<kg<<endl;
}
Weight::Weight()
{
    kg=0;
}