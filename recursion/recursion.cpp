#include<iostream>
using namespace std;

int factorial(int n)
{
    int count = 0;
    cout<<"Factorial : "<<endl;
    if(n>1)
    {
        return n * factorial(n-1);
    }else{
        return 2;
    }
}

int main()
{
    cout<<endl;
    int result = factorial(4);
    cout<<"Result : "<<result<<endl;
    cout<<endl;
}