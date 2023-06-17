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

void insertAtFirst(Node* &head, int data)
{
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtLast(Node* head, int data)
{
    Node* newNode = new Node(data); 

    Node* prevNode;
    while(head != NULL)
    {
        prevNode = head;
        head = head->next;
    }

    prevNode->next = newNode;

}

// Insert value at specific position using value.

void insertAtSpecific(Node* head, int value, int data)
{
    Node* newNode = new Node(data);
    Node* prevNode;

    while(head != NULL)
    {
        if(head->data == value)
        {
            prevNode = head;
            break;
        }
        head = head->next;
    }

    newNode->next = prevNode->next;
    prevNode->next = newNode;
}


void printList(Node* head)
{
    cout<<endl;
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
    cout<<endl;
}

// Delete node at last 

void deleteSpecificNode(Node* head, int data)
{
    Node* prev;

    while(head != NULL)
    {
        if(head->data == data)
        {
            prev->next = head->next;
            delete head;
            break;
        }

        prev = head;
        head = head->next;
    }
}

void deleteLastNode(Node* head)
{
    if(head == NULL || head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }

    while(head->next->next != NULL)
    {
        head = head->next;
    }
    delete head->next;
    head->next = NULL;
}

int main()
{
    Node* one = new Node(5);
    Node* head = one;
    
    insertAtFirst(head, 0);
    insertAtLast(head, 10);
    insertAtSpecific(head, 10, 15);
    // deleteSpecificNode(head, 10);

    deleteLastNode(head);
    printList(head);
}