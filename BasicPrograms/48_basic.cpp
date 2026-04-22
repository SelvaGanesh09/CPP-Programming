//Using dynamic allocation in arrays
#include<iostream>
using namespace std;
void getArray(int*,int);
void display(int*,int);
int main()
{
	int *arr,n;

	cout<<"Enter numbers of elements : ";
	cin>>n;
	arr=new int[n];

	getArray(arr,n);

	display(arr,n);

	delete[] arr;

	display(arr,n);
	return 0;
}
void getArray(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Enter a value : ";
		cin>>arr[i];
	}
}
void display(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}