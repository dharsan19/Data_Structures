#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};

void insert(node*& head, int value)
{
    node* newnode = new node;
    newnode->data = value;
    newnode->next = nullptr;

    if(head == nullptr)
    {
        head = newnode;
    }
    else
    {
        node* current = new node;
        current = head;
        while(current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newnode;
    }
}

void printll(node* head)
{
    node* current = head;
    while(current != nullptr)
    {
        cout<<current->data<<" ";
        current = current->next;
    }
    cout<<endl;
}

void midelement(node* head)
{
    node* slowptr = head;
    node* fastptr = head;
    while(fastptr->next != nullptr && fastptr->next->next != nullptr)
    {
        fastptr = fastptr->next->next;
        slowptr = slowptr->next;
    }
    cout<<"The middle element is "<<slowptr->data<<endl;
}

int main()
{
    node* head = nullptr;
    int n;
    cout<<"Enter the no of elements : ";
    cin>>n;
    cout<<"Enter the elements : "<<endl;
    for(int i = 0; i < n;i++)
    {
        int value;
        cin>>value;
        insert(head,value);
    }
    printll(head);
    midelement(head);

    return 0;
}