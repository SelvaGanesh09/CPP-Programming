#include<iostream>
using namespace std;
class CoOrdinates
{
    private:
        int x,y;
    public:
        CoOrdinates operator+(CoOrdinates);
        void setValues(int,int);
        void display();
};

int main()
{
    CoOrdinates obj1,obj2,obj3,obj4;
    obj1.setValues(4,7);
    obj2.setValues(2,6);
    obj3=obj1+obj2;
    obj3.display();
    //obj4=obj1+obj2+obj3;
    //obj4=obj1.operator+(obj2.operator+(obj3));
    obj4 = obj1.operator+(obj2).operator+(obj3);

    obj4.display();
    return 0;
}
CoOrdinates CoOrdinates::operator+(CoOrdinates e)
{
    CoOrdinates t;
    t.x=x+e.x;
    t.y=y+e.y;
    return t;
}
void CoOrdinates::setValues(int a,int b)
{
    x=a;
    y=b;
}
void CoOrdinates::display()
{
    cout<<x<<" "<<y<<endl;
}