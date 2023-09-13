#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> stack1;
    stack<char> stack2;
    string s = "abbaca";

    for(char c : s)
    {
        if(!stack1.empty() && stack1.top() == c)
        {
            stack1.pop();
        }
        else
        {
            stack1.push(c);
        }
    }
    string ans = "";
    while(!stack1.empty())
    {
        stack2.push(stack1.top());
        stack1.pop();
    }
    while(!stack2.empty())
    {
        ans += stack2.top();
        stack2.pop();
    }
    cout<<"The string after the removal od adjacent duplicates : "<<ans<<endl;
    return 0;
}