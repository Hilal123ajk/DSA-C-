#include<iostream>
using namespace std;

void mergeSort(int arr[], int size)
{
    
}

int main()
{

   int arr[6] = {6,4,8,7,2,1};
   int size = 6;

   // Copying left mid values
    int leftMid[3];
    for(int i=0; i<3; i++)
    {
        leftMid[i] = arr[i];
        
    }

    // Copying right mid values
    int rightMid[3];
    int j=0;
    for(int i=3; i<6; i++)
    {
        rightMid[j] = arr[i];
        j++;
    }

    cout<<"\n";
   for(int i=0; i<3; i++)
   {
      cout<<leftMid[i]<<" ";
   }
    cout<<"\n";

}