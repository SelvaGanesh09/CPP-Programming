
#include "Employee.h"
int main()
{
    Employee emp1("CrazyJessy",21);
    Employee emp2;

    emp1.showData();
    emp2.getData("Gloria",19);
    emp2.showData();
    return 0;
}