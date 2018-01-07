#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int t,A,n,Ob[10000],i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld",&A);
        scanf("%ld",&n);
        for(i=0;i<n;i++)
            scanf("%ld",&Ob[i]);
        for(i=0;i<n;i++)
        {
            if(Ob[i]==1)
              A=A+2;
            else
              A=A-1;
            if(A==0)
                break;
        }
        if(i==n||i<n)
            printf("Yes %ld\n",A);
        else
            printf("No %ld\n",i+1);

    }

    return 0;
}
