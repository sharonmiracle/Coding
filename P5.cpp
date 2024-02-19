#include <iostream>
using namespace std;
int main()
{
    int n;
    int rev = 0;
    int rem, temp;
    cout<<"Enter a number : ";
    cin>>n;
    temp = n;
    while(temp>0)
    {
        rem = temp%10;
        rev = (rev*10) + rem;
        temp = temp/10;
    }
    if(rev == n)
    {
        cout<<"It is a Palindrome";
    }
    else
    {
        cout<<"It is not a Palindrome";
    }
    return 0;
    
}
