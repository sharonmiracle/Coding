#include <iostream>
using namespace std;

bool primeCheck(int a)
{
    bool isPrime = true;
    if(a==0 || a==1)
    {
        isPrime = false;
    }
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}
    
int main() 
{
    int n1,n2;
    
    cout<<"Enter the number 1 : ";
    cin>>n1;
    cout<<"Enter the number 2 : ";
    cin>>n2;
    
    int sum=0;
    for(int i=n2;i>=n1;i--)
    {
        if(primeCheck(i))
        {
            sum = sum+i;
        }
    }
    cout<<"The sum of prime numbers is "<<sum;

    return 0;
}
