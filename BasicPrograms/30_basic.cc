#include<iostream>
using namespace std;
int main()
{
	char name[100];
	int num=0;
	int i=0,x;
	cout<<"Enter a number : ";
	cin>>name;
	while(name[i]!='\0')
	{
		x=name[i]-'0';
		num+=x;
		i++;
	}
	cout<<num<<endl;
	return 0;
}

