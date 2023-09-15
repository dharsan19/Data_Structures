#include<bits/stdc++.h>
using namespace std;

void profit_maximization(int arr[], int tickets, int n)
{
    priority_queue<int> max_heap;
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        max_heap.push(arr[i]);
    }
    while(tickets!=0)
    {
        sum += max_heap.top();
        max_heap.pop();
        tickets--;
    }
    cout<<"The maximum Profit : "<<sum<<endl;
}

int main()
{
    int arr[] = {11,3,7,2,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int tickets = 3;
    profit_maximization(arr,tickets,n);
    return 0;
}