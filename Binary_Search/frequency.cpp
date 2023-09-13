#include<iostream>
using namespace std;

int first_occurance(int arr[], int l, int r, int k)
{
    int res = -1;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(arr[mid] == k)
        {
            res = mid;
            r = mid-1;
        }
        else if(arr[mid]>k)
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    return res;
}

int last_occurance(int arr[], int l, int r, int k)
{
    int res = -1;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(arr[mid] == k)
        {
            res = mid;
            l = mid+1;
        }
        else if(arr[mid] > k)
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    return res;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,6,6,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 6;

    int freq = 0;
    int first_index = first_occurance(arr,0,n-1,k);
    int last_index = last_occurance(arr,0,n-1,k);

    if(first_index == -1 || last_index == -1)
    {
        cout<<"The Element not found"<<endl;
    }
    else
    {
        freq = last_index - first_index + 1;
        cout<<"The Frequency is : "<<freq<<endl;
    }
}