#include<iostream>
using namespace std;
class Sample
{
private:
	int data;
public:
	Sample();
	void changeData() const;
	void showData();
	void add(Sample const,Sample const);
	void getData();
};
int main()
{
	
	return 0;
}
Sample::Sample()
{
	data=0;
}
void Sample::changeData() const
{
	data=10;
}
void Sample::showData()
{
	cout<<"Data : "<<data<<endl;
}
void Sample::add(Sample const &obj1,Sample const &obj2)
{
	data = obj1.data + obj2.data;
}
void getData()
{
	cout<<"Enter a data : ";
	cin>>data;
}