#include<iostream>
using namespace std;
int main()
{
	int a,b;
	
	cout<<"enter number A: ";
	cin >> a;
	
	cout<<"enter number B: ";
	cin >> b;
	
	a = a^b;
	b = a^b;
	a = a^b;
	
	cout << "A :"<<a;
	cout << "B :"<<b;
	return(0); 
}
