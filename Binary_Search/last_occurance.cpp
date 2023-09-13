#include<iostream>
using namespace std;

int last_occurance(int arr[], int l, int r, int k)
{
    int res = -1;
    while(l<=r)
    {
        int mid = l+(r-l)/2;
        if(arr[mid] == k)
        {
            res = mid;
            l = mid+1;
        }
        else if(arr[mid] < k)
        {
            l = mid+1;
        }
        else
        {
            r= mid-1;
        }
    }
    return res;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,6,6,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 6;
    int index = last_occurance(arr,0,n-1,k);

    cout<<"The last occurance of the element "<<k<<" in the index "<<index<<endl;
}