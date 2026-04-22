#include<iostream>
using namespace std;
struct Complex
{
    int money;
};
int toInt(Complex c)
{
    return c.money;
}
int main()
{
    Complex mom;
    int x;
    mom.money=100;
    x=toInt(mom);
    cout<<"Money son has : "<<x;
    return 0;
}