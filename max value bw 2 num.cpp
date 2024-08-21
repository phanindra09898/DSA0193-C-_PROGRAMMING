#include<iostream>
using namespace std;
int main()
{
	int a,b;
	
	cout<<"enter a value: ";
	cin>>a;
	
	cout<<"enter b value: ";
	cin>>b;
	
	if (a>b)
	{
		cout<<"a is maximum value";
	}
	else if(b>a)
	{
		cout<<"b is maximum value";
	}
	else if(a==b)
	{
		cout<<"a and b are same values";
	}
	else
	{
		cout<<"error! enter numeric values";
	}
	return(0);
}
