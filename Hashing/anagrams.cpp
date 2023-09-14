#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a[] = {"acd","dca","aab","baa"};
    map<string, vector<int>> m;
    for(int i =0; i<4;i++)
    {
        string str = "";
        str = a[i];
        sort(str.begin(), str.end());
        m[str].push_back(i);
    }
    for(auto element : m)
    {
        cout<<element.first<<" : ";
        for(auto j : element.second )
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}