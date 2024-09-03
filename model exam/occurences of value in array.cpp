#include<iostream>
using namespace std;

int main()
{
	int arr[] = {1,2,1,3,8,4,5,1,6,1,1};
	int count=0;
	int l = sizeof(arr)/sizeof(arr[0]);
	
	for (int i=0; i<=l; i++)
	{
		for(int j=i+1; j<=l; j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
	}
	cout<<count;
	return 0;
}


