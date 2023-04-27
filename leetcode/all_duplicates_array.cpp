#include<iostream>
#include<vector>
using namespace std;

/**
 * @brief return all duplicates numbers in an array
 * 
 * @param nums 
 * @return vector<int> 
 */

vector<int> findDuplicates(vector<int>& nums)
{
    vector<int> result;

        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[i] == nums[j])
                {
                    result.push_back(nums[i]);
                    break;
                }
            }
        }

    return result;
}

int main()
{
    vector<int> nums;
    vector<int> result;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(3);
    result = findDuplicates(nums);

    cout<<endl;
    for(int i=0; i<result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
}