#include<iostream>
using namespace std;
int sum(int,int,int n3=0,int n4=0);
int main()
{
	int x,y,z;
	x=sum(10,20);
	cout<<x<<endl;
	return 0;
}
int sum(int n1,int n2,int n3, int n4)
{
	return n1+n2+n3+n4;
}