#include <iostream>
using namespace std;

int main() 
{
    int n;
    int num = 1;
    cout<<"Enter no. of rows : ";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
    }
    return 0;
}
