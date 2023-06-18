#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }    
};

class Queue {
    public:
        Node* front;
        Node* back;

    Queue()
    {
        this->front = NULL;
        this->back = NULL;
    }

    void push(int data)
    {
        Node* newNode = new Node(data);

        if(front == NULL)
        {
            front = newNode;
            back = newNode;

            return;
        }

        back->next = newNode;
        back = newNode;
    }    

    void peak()
    {
        if(front == NULL && back == NULL)
        {
            cout<<"\n No Value At Peak \n";
            return;
        }

        cout<<"\n "<<front->data<<endl;
    }

    void pop()
    {
        if(front == NULL)
        {
            cout<<"\n Empty Queue \n";
            return;
        }

        Node* deleteNode = front;
        front = front->next;

        delete deleteNode;
    }
};

int main()
{
    Queue qu;

    qu.push(5);
    qu.push(10);
    qu.push(15);
    qu.push(20);

    qu.peak();

    qu.pop();
    qu.peak();

    qu.pop();
    qu.peak();
}