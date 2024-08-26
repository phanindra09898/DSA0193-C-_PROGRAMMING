#include<iostream>
using namespace std;

int main()
{
	int arr[5] = {10,20,30,40,50};
	
	cout <<"displaying address: "<<endl;
	for (int i = 0; i<5; i++)
	{
		cout<<"address of arr["<<i<<"] =" <<arr[i]<<endl;
	}
	return(0);
}
