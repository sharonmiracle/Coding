#include <iostream>
using namespace std;

int main() 
{
    int n;
    int mul=1;
    cout<<"Enter the number : ";
    cin>>n;
    while(n>0)
    {
        mul=mul*(n%10);
        n=n/10;
    }
    cout<<"The product of digits in the given number is "<<mul;
    return 0;
}
