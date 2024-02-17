#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    int rev, temp;
    cout<<"Enter a number : ";
    cin>>n;
    temp = n;
    while(temp>0)
    {
        rev = temp%10;
        sum = (sum*10) + rev;
        temp = temp/10;
    }
    if(sum == n)
    {
        cout<<"It is a Palindrome";
    }
    else
    {
        cout<<"It is not a Palindrome";
    }
    return 0;
    
}
