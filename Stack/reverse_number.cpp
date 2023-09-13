#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    int num = 123;
    
    while(num!=0)
    {
        int remainder = num%10;
        st.push(remainder);
        num /= 10;
    }
    int product = 1,reverse = 0;
    while(!st.empty())
    {
        reverse += st.top()*product;
        product *= 10;
        st.pop();
    }
    cout<<reverse<<endl;
}