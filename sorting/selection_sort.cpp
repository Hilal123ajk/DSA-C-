#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {20,12,10,15,2};

    for(int i=0; i<5; i++)
    {
        int min = i;
        for(int j=i+1; j<5; j++)
        {
            if(arr[min] > arr[j])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<",";
    }
}