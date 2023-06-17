#include<iostream>
using namespace std;

/**
 * @brief Linear Search Using Recursion
 * 
 * @return bool
*/

bool findKey(int arr[], int key, int size)
{
    if(arr[size] == key)
    {
        return true;
    }
    if(size < 0)
    {
        return false;
    }

    return findKey(arr, key, size - 1);
}

int main()
{
    int arr[5] = {1,5,7,3,2};
    int key = 7;

    int found = findKey(arr, 2, 5);

    if(found)
    {
        cout<<"\n Value Found \n";
    }else{
        cout<<"\n Value Not Found \n";
    }
}