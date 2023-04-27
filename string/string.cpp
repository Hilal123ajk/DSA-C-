#include<iostream>
using namespace std;

int main()
{
    cout<<endl;

    char str1[4] = {'A','\0','b','c'};
    cout<<str1;
    string str2 = "A\0bc";
    cout<<str2;

    cout<<endl;
}