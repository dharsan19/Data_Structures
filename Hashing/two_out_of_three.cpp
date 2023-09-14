#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1,2,3};
    int b[] = {2,4,5,8};
    int c[] = {4,1,2,6};

    map<int,int> m;
    for(int i : a)
    {
        m[i]++;
    }
    for(int i : b)
    {
        m[i]++;
    }
    for(int i : c)
    {
        m[i]++;
    }

    for(pair i : m)
    {
        if(i.second >= 2 )
        {
            cout<<i.first<<" ";
        }
    }
    cout<<endl;
    return 0;
}