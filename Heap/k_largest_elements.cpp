#include<bits/stdc++.h>
using namespace std;

void k_largest_elements(int arr[], int k, int n)
{
    priority_queue<int, vector<int>, greater<int>> min_heap;
    for(int i = 0; i<n;i++)
    {        
        if(min_heap.size() < k)
            {
                min_heap.push(arr[i]);
            }
        else if(min_heap.top() < arr[i])
            {
                min_heap.pop();
                min_heap.push(arr[i]);
            }
    }
    while(!min_heap.empty())
    {
        cout<<min_heap.top()<<" ";
        min_heap.pop();
    }
    cout<<endl;
}

int main()
{
    int arr[] = {45,65,12,34};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    for(auto i : arr)
    {

    }
    k_largest_elements(arr,k,n);
    return 0;
}