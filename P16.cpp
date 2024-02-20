#include <iostream>
using namespace std;

int main()
{
    string word;
    int n;
    bool ispal = false;
    cout<<"Enter a word : ";
    cin>>word;
    n = word.length(); 
    
    for(int i=0;i<n/2;i++)
    {
        if(word[i]==word[n-i-1])
        {
            ispal = true;
        }
    }
    
    if(ispal)
    {
        cout<<"It is a Palindrome";
    }
    else
    {
        cout<<"It is not a Palindrome";
    }

    return 0;
}
