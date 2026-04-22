#include<iostream>
using namespace std;
class Index
{
    private:
    int count;
    public:
    Index();
    Index operator++();
    Index operator++(int);
    void display();

};
int main(void)
{
    Index obj1;
    obj1.display();
    return 0;
}
Index::Index()
{
    count=0;
}
Index Index::operator++(Index temp)
{
    temp.count++;
    return temp;
}
/*Index Index::operator++(int a)
{
    Index temp;
    temp.a++;
    return temp;
}*/
void Index::display()
{
    cout<<count<<endl;
}