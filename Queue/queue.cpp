#include<iostream>
using namespace std;

#define size 5

class Queue {
    public:
        int* arr;
        int front;
        int back;

    Queue()
    {
        arr = new int[size];
        this->front = -1;
        this->back = -1;
    }    

    void push(int data)
    {
        if(back == size-1)
        {
            cout<<"\n Queue Full \n";
            return;
        }    

        back++;
        arr[back] = data;

        if(front == -1)
        {
            front++;
        }
    }

    void peak()
    {
        if(front > back)
        {
            cout<<"\n No Value \n";
            return;
        }
        cout<<"\n Top Value : "<<arr[front]<<"\n";
    }

    void pop()
    {
        if(front == -1)
        {
            cout<<"\n No Value To Pop \n";
            return;
        }

        front++;
    }

    void empty()
    {
        if(front == -1 || front > back)
        {
            cout<<"\n Queue Is Empty \n";
            return;
        }  
    }
};

int main()
{
    Queue qu;

    qu.push(5);
    qu.push(10);
    qu.push(15);
    qu.push(20);
    qu.push(25);

    qu.pop();
    qu.pop();
    qu.pop();
    qu.pop();
    qu.pop();
    qu.pop();
    qu.pop();
    qu.pop();

    qu.empty();    

}