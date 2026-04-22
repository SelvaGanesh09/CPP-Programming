#include<string>
using namespace std;
class Employee
{
    private:
        string name;
        int age;
    public:
        Employee();
        Employee(string name,int age);
        void getData(string,int);
        void showData();
};