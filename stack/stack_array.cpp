#include<iostream>
using namespace std;

#define n 5

class Stack {

    public:
        int* arr;
        int top;

    Stack()
    {
        arr = new int[n];
        top = -1;
    }    

    void push(int data)
    {
        if(top == n-1)
        {
            cout<<"\n Stack Overflow"<<endl;
            return;
        }

        top++;
        arr[top] = data;
    }

    void pop()
    {
        if(top == -1)
        {
            cout<<"\n Stack Is Empty"<<endl;
            return;
        }

        --top;
    }

    void isStackEmpty()
    {
        if(top == -1)
        {
            cout<<"Stack Is Empty";
        }
    }

    void printStack()
    {
        cout<<endl;
        for(int i=0; i<=top; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main()
{
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    
    stack.pop();
    stack.pop();
    stack.pop();

    stack.isStackEmpty();

    stack.printStack();
}