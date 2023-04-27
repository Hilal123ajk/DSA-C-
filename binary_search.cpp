#include<iostream>
using namespace std;

/**
 * Binary Search 
 * 
 * Algorithm works find but fails when finding last value
 * 
 */

int main()
{
    int nums[9] = {1,2,3,4,5,6,7,8,9};
    int startIndex = 0;
    int lastIndex = 8;
    int value = 7;
    int found = 0;
    int result;

    cout<<"\n";
    for(int i=0; i<9; i++)
    {
        int midIndex = (startIndex+lastIndex)/2;

        if(nums[midIndex] == value)
        {
            found = 1;
            result = midIndex;
        }else if(value > nums[midIndex])
        {
            startIndex = midIndex + 1;
        }else if(value < nums[midIndex])
        {
            lastIndex = midIndex - 1;
        }
        
    }
    cout<<"\n";

    if(found == 1)
    {
        cout<<"Value found at : "<<result<<endl;
    }else
    {
        cout<<"Oops! not found"<<endl;
    }
    cout<<endl;
    
}