#include<iostream>
using namespace std;

void swap()
{
    cout<<"swapping";
}

int main()
{
    int arr[5] = {54,22,6,85,34};

    for(int j=0; j<5; j++)
    {
        for(int i=0; i<5; i++)
        {
            if(arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

cout<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<arr[i] << ",";
    }
}