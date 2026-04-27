#include<iostream>
using namespace std;
class String
{
private:
	char str[50];
public:
	String();
	String(const char*);
	String(int);//here constructor is overloaded
	operator int();
	void displayData();
	//Extra Functions
	void strcpy(char*,const char*);//copy one string to another
	void itos(int,char*,int);//converts int to string
};
int main()
{
	String s1=123;
	s1.displayData();

	s1=150;
	s1.displayData();

	String s2("1234");
	int i=int(s2);
	cout<<"i : "<<i<<endl;

	String s3("456");
	i=s3;
	cout<<"i : "<<i<<endl;
	return 0;
}
String::String()
{
	cout<<"Default Constructor"<<endl;
	str[0]='\0';
}
String::String(const char *x)
{
	cout<<"Parameterized Constructor using char*"<<endl;
	strcpy(str,x);
}
String::String(int num)
{
	cout<<"Parameterized Constructor uing int"<<endl;
	itos(num,str,10);
}
void String::displayData()
{
	cout<<"String : "<<str<<endl;
}
String::operator int()
{
	cout<<"Ovloaded int keyword"<<endl;
	int num=0;
	int i=0;
	int base=1;

	while(str[i]!='\0')
	{
		num+=(str[i]-48)*base;
		i++;
		base*=10;
	}
	int x=num;
	num=0;
	base/=10;
	while(x!=0)
	{
		num+=(x%10)*base;
		x/=10;
		base/=10;
	}
	return num;
}
//Extra Functions
void String::strcpy(char *str1,const char *str2)
{
	int i=0;
	while(str2[i]!='\0')
	{
		str1[i]=str2[i];
		i++;
	}
	str1[i]='\0';
}
void String::itos(int num,char *str,int n)
{
	int i=0;
	int len=0;
	while(num!=0)
	{
		str[i]=(num%n)+'0';
		num/=n;
		i++;len++;
	}
	str[i]='\0';
	//reverse a string
	i=0;
	len--;
	while(i<=len/2)
	{
		char temp;
		temp=str[i];
		str[i]=str[len-i];
		str[len-i]=temp;
		i++;
	}
}