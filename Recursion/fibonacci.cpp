#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2) ;
}
void printfibonnaci(int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<fibonacci(i)<<" ";
    }
}
int main()
{
    printfibonnaci(5);
    cout<<endl;
    return 0;
}