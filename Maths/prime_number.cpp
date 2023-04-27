#include<iostream>
using namespace std;

bool isPrime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n <= 1)
        {
            return true;
        }
        if(n%i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int number;
    cout<<"Enter Number : ";
    cin>>number;
    bool prime = isPrime(number);
    if(prime)
    {
        cout<<number<<" is Prime"<<endl;
    }else{
        cout<<number<<" is Not prime"<<endl;
    }
}