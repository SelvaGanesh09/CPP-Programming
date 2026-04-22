#include<iostream>
using namespace std;
class Sample
{
private:
    int x,y;
public:
    Sample();
    void setValue(int,int);
    void show();
};
int main()
{
    Sample obj1;
    cout<<sizeof(obj1)<<endl;
    return 0;
}
Sample::Sample()
{
    x=0;
    y=0;
}
void Sample::setValue(int x,int y)
{
    this->x=x;
    this->y=y;
}
void Sample::show()
{
    cout<<x<<" "<<y<<endl;
}