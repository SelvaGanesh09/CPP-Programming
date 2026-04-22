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
        Weight(int);
        void printWeight();
};
int main()
{
    Weight obj1,obj2;
    obj1=++obj2;
    obj1.printWeight();
    obj2.printWeight();
    obj1=obj2++;
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
    Weight temp(kg);
    kg++;
    return temp;
}
Weight::Weight()
{
    kg=0;
}
Weight::Weight(int x)
{
    kg=x;
}
void Weight::printWeight()
{
    cout<<"Weight i kg : "<<kg<<endl;
}