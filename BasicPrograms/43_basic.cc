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
//This program won't work as you expected
int main()
{
    Weight obj1,obj2;
    obj2=++obj1;
    obj1=++obj2;
    obj1.printWeight();
    obj2.printWeight();

    obj2=obj1++;
    obj1=obj2++;
    obj1.printWeight();
    obj2.printWeight();
    return 0;
}
Weight Weight::operator++(int)
{
    Weight temp;
    temp.kg++;
    return temp;
}
Weight Weight::operator++()
{
    Weight temp;
    temp.kg++;
    return temp;
}
Weight::Weight()
{
    kg=0;
}
void Weight::printWeight()
{
    cout<<"Weight in kg : "<<kg<<endl;
}