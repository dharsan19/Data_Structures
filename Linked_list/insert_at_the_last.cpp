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
        while(current->next!= nullptr)
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
void insertatlast(node*& head, int value)
{
    node* newnode = new node;
    newnode->data = value;
    newnode->next = nullptr;
    node* current = head;
    while(current->next!= nullptr)
    {
        current = current->next;
    }
    current->next = newnode;
}
int main()
{
    node* head = nullptr;
    int n;
    cout<<"Enter the no of elements : ";
    cin>>n;
    cout<<"Enter the "<<n<<" elements : ";
    for(int i = 0; i<n;i++)
    {
        int value;
        cin>>value;
        insert(head,value);
    }
    cout<<"Linked list before inserting a element at the last : ";
    printll(head);
    cout<<"Enter a element to insert at the last : ";
    int val;
    cin>>val;
    insertatlast(head,val);
    cout<<"Linked list after inserting a element at the last : ";
    printll(head);
}