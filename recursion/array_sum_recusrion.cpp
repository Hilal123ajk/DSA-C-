#include<iostream>
using namespace std;

/**
 * @brief Sum array using recursion.
 * 
 * @return int
*/

int sumArray(int arr[], int n)
{
    if(n==0)
        return arr[n];

    int sum = 0;    
    return sum = arr[n] + sumArray(arr, n-1);
    
}

int main()
{
    int arr[6] = {2,2,3,4,5,6};
    int size = 5;
    
    int result = sumArray(arr, size);

    cout<<"\n Sum : "<<result<<endl;
}