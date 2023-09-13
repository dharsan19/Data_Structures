#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> s;
    string a = "((()))";
    int n = a.size();
    for(int i =0; i< n;i++)
    {
        if(!s.empty() && s.top() == '(' && a[i] == ')')
        {
            s.pop();
        }
        else
        {
            s.push(a[i]);
        }
    }
    if(s.empty())
    {
        cout<<"Balanced"<<endl;
    }
    else
    {
        cout<<"Not Balanced"<<endl;
    }
    return 0;

}