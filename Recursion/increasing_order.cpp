#include<iostream>
using namespace std;

void printrecursion(int n)
{
    if(n==0)
    {
        return;
    }
    printrecursion(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cout<<"Enter a positive number : ";
    cin>>n;
    printrecursion(n);
    cout<<endl;
    return 0;
}