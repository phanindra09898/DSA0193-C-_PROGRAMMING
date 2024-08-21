#include<iostream>
using namespace std;

int main()
{
	char str;
	cout<<"enter a string: ";
	cin>>str;
	
	if (str=='A' || str == 'E' || str == 'I' || str == 'O' || str == 'U' || str=='a' || str == 'e' || str == 'i' || str == 'o' || str == 'u')
	{
	    cout<<"vowels";
	}
	else
	{
		cout<<"consonants";
	}
	return(0);
}

