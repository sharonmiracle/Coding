#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n;
    int dec=0,i=0;
    int rem;
    cout<<"Enter a binary number : ";
    cin>>n;
    
    while(n!=0)
    {
        rem=n%10;
        dec+=rem*pow(2,i);
        n=n/10;
        i++;
    }
    cout<<"The decimal number is "<<dec;
    return 0;
}
