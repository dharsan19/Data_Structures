#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int first_repeating_element(int arr[], int n)
{
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for(int i = 0; i < n; i++)
    {
        if(m[arr[i]] > 1)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<first_repeating_element(arr,n)<<endl;

    return 0;
}