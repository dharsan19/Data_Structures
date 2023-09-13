#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};

void insert(node*& head,int value)
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

void remove_at_index(node*& head, int index)
{
    node* current = head;
    for(int i =0 ;i < index-1; i++)
    {
        current = current->next;
    }
    current->next = current->next->next;
}

int main()
{
    node* head = nullptr;
    int n;
    cout<<"Enter the no of elements : ";
    cin>>n;
    cout<<"Enter the elements : "<<endl;
    for(int i = 0; i< n; i++)
    {
        int value;
        cin>>value;
        insert(head,value);
    }
    cout<<"Linked list Before removal : ";
    printll(head);
    cout<<"Enter the index to remove the element : ";
    int index;
    cin>>index;
    remove_at_index(head,index);
    cout<<"Linked list after removal : ";
    printll(head);

    return 0;
}