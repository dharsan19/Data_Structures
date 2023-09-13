#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements : "<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    stack<int> s1;
    stack<int> s2;

    for(int i =0; i<n; i++)
    {
        s1.push(a[i]);
    }
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    cout<<"FIFO using stack : ";
    while(!s2.empty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
    cout<<endl;
    return 0;
}