#include<iostream>
using namespace std;
void strcpy(char*,char*);
int main(void)
{
	char name1[]="Tamizh";
	char name2[10];
	strcpy(name2,name1);
	cout<<name2<<endl;
	return 0;
}
void strcpy(char *x,char *y)
{
	while(*y!='\0')
	{
		*x=*y;
		x++;
		y++;
	}
	*x='\0';
}