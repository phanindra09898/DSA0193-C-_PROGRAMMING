#include<iostream>
using namespace std;

int main()
{
	float a,b;
	char oper;
	
	cout<<"enter number A: ";
	cin >> a;
	
	cout<<"enter number B: ";
	cin >> b;
	
	cout << "enter operator(+,-,*,/): ";
	cin >> oper;
	
	switch(oper)
	{
		case '+':
			cout<<"result :"<<a+b<<endl;
			break;
		case '-':
			cout<<"result :"<<a-b<<endl;
			break;
		case '*':
		    cout<<"result :"<<a*b<<endl;
		    break;
		case '/':
			if(b!=0)
			{
				cout << "result: "<<a/b<<endl;
				break;
			}
			else
			{
				cout << "cannot divisible by 0";
				break;
			}
		default:
			cout << "error! enter correct operator";
	}
	return(0);
}
