#include<iostream>
using namespace std; 

// Finding unique element in array 

int main()
{ 
	int arr[5] = {2,5,2,6,5};
	int ans = 0;
	
	for(int index=0; index<5; index++)
	{
		ans = ans ^ arr[index];
	}
	
	cout<<ans<<endl;
}