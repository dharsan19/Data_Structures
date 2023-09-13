#include<iostream>
using namespace std;

void printarray(int arr[],int size)
{
    if(size<0)
    {
        return;
    }
    printarray(arr,size-1);
    cout<<arr[size]<<" ";
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printarray(arr,n-1);
    cout<<endl;
    return 0;
}