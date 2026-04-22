#include<iostream>
using namespace std;
class Weight
{
    private:
        int kg;
    public:
        void operator ++()
        {
            ++kg;
        }
        void operator ++(int)
        {
            kg++;
        }
        Weight();
        Weight(int); 
        void printWeight();
};
int main()
{
    Weight obj1;
    obj1++;
    obj1.printWeight();
    ++obj1;
    obj1.printWeight();
    //obj2
    Weight obj2;
    obj2.operator++();
    obj2.printWeight();
    obj2.operator++(1);
    obj2.printWeight();
    return 0;
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
    cout<<"Weight in kg : "<<kg<<endl;
}