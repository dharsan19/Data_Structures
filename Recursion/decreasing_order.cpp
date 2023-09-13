#include<iostream>
using namespace std;

void printrecursion(int n)
{
    if(n == 0)
    {
        return;
    }
    cout<<n<<" ";
    printrecursion(n-1);
}

int main()
{
    int n;
    cout<<"Enter a positive number :";
    cin>>n;
    printrecursion(n);
    cout<<endl;
    return 0;
}