#include<iostream>
using namespace std;


bool find(int arr[], int key, int size)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == key)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    int arr[5] = {1,5,7,3,2};
    int key = 7;

    int found = find(arr, 10, 5);

    if(found)
    {
        cout<<"\n Value Found \n";
    }else{
        cout<<"\n Not Found \n";
    }
}