#include<iostream>
using namespace std;

int main()
{
	int l,b,h,area,peri;
	cout<< "enter length";
	cin>>l;
	
	cout<< "enter breadth";
	cin>>b;
	
	cout<< "enter height";
	cin>>h;
	
	area = l * b * h ;
	peri = l + b + h ;
	cout << "area : "<<area;
	cout << "perimeter : "<<peri;
	return(0);
	
}
