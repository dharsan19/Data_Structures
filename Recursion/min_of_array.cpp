#include<iostream>
#include<cmath>
using namespace std;

int min_of_array(int arr[], int n)
{
    if(n==0)
    {
        return arr[0];
    }
    int minarray = min_of_array(arr,n-1);

    return min(arr[n],minarray);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The minimum element is : "<<min_of_array(arr,n)<<endl;
    return 0;
}