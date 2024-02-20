#include <iostream>
using namespace std;

int main()
{
    int n;
    int mul = 1;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        mul*=i;
    }
    cout<<"The product is "<<mul;

    return 0;
}
