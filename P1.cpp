#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    int sr = sqrt(x);
    if(sr*sr == x)
    {
        cout<<"Yes "<<x<<" is a Perfect Square Number";
    }
    else
    {
        cout<<"No "<<x<<" is not a Perfect Square Number";
    }
    return 0;
}