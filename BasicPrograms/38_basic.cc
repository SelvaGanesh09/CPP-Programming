#include<iostream>
using namespace std;
class CoOrdinates
{
    private:
        int x,y;
    public:
        void setValues(int,int);
        void display(CoOrdinates);
        CoOrdinates operator+(CoOrdinates obj1)
        {
            CoOrdinates t;
            t.x=x+obj1.x;
            t.y=y+obj1.y;
            return t;
        }
};
int main()
{
    CoOrdinates obj1,obj2,obj3;
    obj1.setValues(2,3);
    obj2.setValues(2,3);
    //obj3=obj1+obj2;
    obj3=obj1.operator+(obj2);
    obj3.display(obj3);
    return 0;
}
void CoOrdinates::display(CoOrdinates t)
{
    cout<<t.x<<" "<<t.y<<endl;
}
void CoOrdinates::setValues(int a,int b)
{
    x=a;
    y=b;
}