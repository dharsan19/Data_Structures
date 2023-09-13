#include<iostream>
using namespace std;

int smallest_character_greater_than_number(int arr[], int l, int r, int k)
{
    int res = -1;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(arr[mid] == k)
        {
            l = mid+1;
        }
        else if (arr[mid] > k)
        {
            res = arr[mid];
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

    int result = smallest_character_greater_than_number(arr,0,n-1,k);

    cout<<"The smallest character is " << result<<" Greater than the number "<<k<<endl;
}