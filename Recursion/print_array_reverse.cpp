#include<iostream>
using namespace std;

void print_array_reverse(int arr[], int size)
{
    //base condition
    if(size<0)
    {
        return ;
    }
    cout<<arr[size]<<" ";
    print_array_reverse(arr,size-1);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    print_array_reverse(arr,n-1); //remember to pass the size-1 because of indexing
    cout<<endl;
    return 0;
}