#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};



int main()
{
    node* head = new node();
    node* second = new node();
    node* third = new node();

    head->data = 4;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 12;
    third->next = NULL;

    while(head != NULL)
    {
        cout<<"Data : "<<head->data<<endl;
        head = head->next;
    }
}    