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

void printList(Node* head, Node* last)
{
    cout<<endl;
    while(head != NULL)
    {
        cout<<head->data<<" ";

        if(head == last)
        {
            break;
        }
        head = head->next;
    }
    cout<<endl<<"\n";
}


int main()
{
    Node* one = new Node(5);
    Node* two = new Node(10);
    Node* three = new Node(15);
    one->next = two;
    two->next = three;
    three->next = one;
    Node* last;
    last = three;

    printList(one, last);
}