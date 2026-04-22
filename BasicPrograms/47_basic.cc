//creating a dynamic memory allocation for built in data types
#include<iostream>
using namespace std;
int main()
{   
    int *ptrInt = new int;

    *ptrInt=10;

    cout<<*ptrInt<<endl;

    delete ptrInt;

    cout<<*ptrInt;
    return 0;
}