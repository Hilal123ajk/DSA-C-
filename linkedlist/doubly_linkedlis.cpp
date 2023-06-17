#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* prev;
        Node* next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }     
};

void printList(Node* head)
{
    cout<<endl;
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl<<endl;
}

void insertAtFirst(Node* &head, int data)
{
    Node* newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtLast(Node* head, int data)
{
    Node* newNode = new Node(data);
    Node* lastNode;

    while(head != NULL)
    {
        lastNode = head;
        head = head->next;
    }

    lastNode->next = newNode;
    newNode->prev = lastNode;
}

int main()
{
    Node* node = new Node(5);
    Node* head = node;

    insertAtFirst(head, 4);
    insertAtLast(head, 6);
    insertAtFirst(head, 3);
    insertAtLast(head, 7);    

    printList(head);
}