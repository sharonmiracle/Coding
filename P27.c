#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. of terms : ");
    scanf("%d",&n);
    int sum=0, term=0;
    for(int i=1;i<=n;i++)
    {
        term = term * 10 + 3;
        sum+=term;
        printf("%d",term);
        
        if(i<n)
        {
            printf("+");
        }
    }

    return 0;
}
