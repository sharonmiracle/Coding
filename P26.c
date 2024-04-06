#include <stdio.h>
int main()
{
    int n,nn;
    int sum = 0;
    printf("Enter the no. of terms : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        nn = i*i;
        sum+=nn;
    }
    printf("The sum of %d natural numbers = %d",n,sum);

    return 0;
}
