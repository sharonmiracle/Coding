#include<iostream>
using namespace std;

int main()
{
    int n;
    bool isprime = true;
    cout<<"Enter a number : ";
    cin>>n;
    
    if(n==0 || n==1)
    {
        isprime = false;
    }
    
    for(int i=2;i<=n/2;i++)
    {
        if(n%i == 0)
        {
            isprime = false;
            break;
        }
    }
    
    if(isprime)
    {
        cout<<"It is a prime number";
    }
    else
    {
        cout<<"It is not a prime number";
    }
    
    return 0;
}
