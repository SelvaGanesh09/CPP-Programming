#include<iostream>
using namespace std;
class Integer
{
    private:
        int x;
    public:
        Integer(int i)
        {
            x=i;
        }
        Integer()
        {
            x=0;
        }
        void get_value();
        void display_data();
};
int main()
{
    Integer obj1,obj2,obj3(100),obj4(50);
    obj1.get_value();
    obj1.display_data();
    cout<<endl;
    obj2.display_data();
    cout<<endl;
    obj3.display_data();
    cout<<endl;
    obj4.get_value();
    obj4.display_data();
    return 0;
}
void Integer::get_value()
{
    cout<<"Enter a value : ";
    cin>>x;
}
void Integer::display_data()
{
    cout<<"Integer : "<<x<<endl;
}
