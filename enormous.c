#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n,k,t,c=0;
    scanf("%ld",&n);
    scanf("%ld",&k);
    while(n--)
    {
        scanf("%ld",&t);
        if(t%k==0)
            c++;
    }
    printf("\n%ld",c);
    return 0;
}
