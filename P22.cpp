#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n>1)
    {
        return n*factorial(n-1);
    }
    else
    {
        return 1;
    }
}
int main() 
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n);
    return 0;
}
