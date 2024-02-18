#include <iostream>
using namespace std;

int main()
{
    char word[100];
    int count = 0;
    cout<<"Enter a word : ";
    cin>>word;
    for(int i=0;word[i]!='\0';i++)
    {
        if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||
           word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U')
        {
            count++;
        }
    }
    cout<<"No. of vowels = "<<count;
    return 0;
}
