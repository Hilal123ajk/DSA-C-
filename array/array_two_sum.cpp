#include<iostream>
#include<vector>
using namespace std;

/**
 * To find the two sum (leetcode problem) 
 * find the two values in nums[] array whose sum = target. 
 */

int main()
{
    int nums[5] = {5,3,2,1,4};
    int target = 5;
    int result[2];

    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(nums[i]+nums[j] == target)
            {
                result[0] = nums[i];
                result[1] = nums[j];
            }
        }
    }

    cout<<endl;
    cout<<"[";
    for(int i=0; i<2; i++)
    {
        cout<<" "<<result[i]<<" ";
    }
    cout<<"]";
    cout<<endl;
    cout<<endl;
}