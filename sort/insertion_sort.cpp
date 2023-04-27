#include<iostream>
using namespace std;

int main()
{              // 0 1 2 3 4
    int arr[5] = {9,5,1,4,3};

    for(int i=1; i<5; i++)
    {                         // index 0 1 2 3 4
        int key = arr[i];    //  array 5 1 4 3 9

        for(int j=i-1; j>=0; j--)
        {
            if(arr[i] < arr[j])
            {
                arr[i] = arr[j];
                arr[j] = key;
            }

            arr[j] = key;
        }
    }

    for(int j=0; j<5; j++)
    {
        cout<<arr[j]<<" ";
    }
}