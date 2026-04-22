#include<iostream>
using namespace std;
void strcpy(char[],char[]);
int main(void)
{
	char name[50]="Ganesh\0";
	char copy[50];
	strcpy(copy,name);
	cout<<copy;
	return 0;
}
void strcpy(char copy[],char name[])
{
	while(*name!='\0')
	{
		*copy=*name;
		name++;
		copy++;
	}
	*copy='\0';
}