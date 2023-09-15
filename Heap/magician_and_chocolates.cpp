#include<bits/stdc++.h>
using namespace std;

void max_chocolates(int arr[], int a, int n)
{
    priority_queue<int> max_heap;
    int sum = 0;
    for(int i = 0; i< n ;i++)
    {
        max_heap.push(arr[i]);
    }
    while(a!=0)
    {
        sum += max_heap.top();
        int value = max_heap.top()/2;
        max_heap.pop();
        max_heap.push(value);
        a--;
    }
    cout<<"The maximum chocolates are : "<<sum<<endl;
}

int main()
{
    int arr[] = {1,5,7,8};
    int a = 2;
    int n = sizeof(arr)/sizeof(arr[0]);
    max_chocolates(arr,a,n);
    return 0;
}