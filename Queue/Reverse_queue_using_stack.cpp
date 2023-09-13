#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    queue<int> q;
    int a[] = {1,2,3,4,5};
    for(int i =0; i< 5; i++)
    {
        q.push(a[i]);
    }
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    cout<<"The Elements after reversing : ";
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n";
    return 0;
}