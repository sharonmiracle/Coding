#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n;col++)
        {
            if(row>=col)
            {
                cout<<col<<" ";
            }
        }
        cout<<"\n";
    }

    return 0;
}
