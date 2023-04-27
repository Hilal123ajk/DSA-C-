#include<iostream>
using namespace std; 

// Find duplicate value in array

int main()
{
	int arr[5] = {4,2,2,9,1};
	int value;
	int condition = 1;
	
	for(int index=0;index<5;index++)
	{
		value = arr[index];
		
		for(int j=index+1;j<5;j++)
		{
			if(arr[j] == value)
			{
				condition = 0;
				break;
			}
		}
		
		if(condition == 0)
		{
			break;
		}
	}
	
	if(condition == 0)
	{
		cout<<"Duplicate value found : "<<value<<endl;
	}else
	{
		cout<<"Not found duplicate value"<<endl;
	}
	
}