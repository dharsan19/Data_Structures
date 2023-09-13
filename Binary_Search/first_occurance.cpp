#include<iostream>
using namespace std;

int First_occurance(int arr[], int l, int r, int k)
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
    int arr[] = {1,2,3,4,4,4,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;

    int index = First_occurance(arr, 0 , n-1, k);
    cout<<"The Element "<<k<<"Occured first in the index : "<<index;
}