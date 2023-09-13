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
    for(int i =0; i<n;i++)
    {
        int value;
        cin>>value;
        insert(head,value);
    }
    cout<<"Linked list : ";
    printll(head);
    return 0;
}