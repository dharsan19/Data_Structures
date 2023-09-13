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
        node* current = head;
        while(current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newnode;
    }
}

void insert_at_first(node*& head, int value)
{
    node* newnode = new node;
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

void printll(node* head)
{
    node* current = head;
    while(current!=nullptr)
    {
        cout<<current->data<<" ";
        current = current->next;
    }
    cout<<endl;
}
int main()
{
    node* head = nullptr;
    int n;
    cout<<"Enter the no of elements : ";
    cin>>n;
    cout<<"Enter the Values : "<<endl;
    for(int i = 0; i < n; i++)
    {
        int value;
        cin>>value;
        insert(head,value);
    }
    cout<<"The linked list before inserting a element in the first : ";
    printll(head);
    cout<<"Enter a value to be inserted at the first : ";
    int val;
    cin>>val;
    insert_at_first(head,val);
    cout<<"The linked list after inserting a element in the first : ";
    printll(head);
    return 0;
}