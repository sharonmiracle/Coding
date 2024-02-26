#include <iostream>
using namespace std;
int main()
{
    int n;
    int t1=0, t2=1;
    int t3;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Fibonacci series of "<<n<<" is "<<t1<<" "<<t2<<" ";
    for(int i=2;i<n;i++)
    {
        t3=t1+t2;
        cout<<t3<<" ";
        t1=t2;
        t2=t3;
    }
    return 0;
}
