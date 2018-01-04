#include<stdio.h>
int main()
{
    long int A[100000];
    long int n,q,i,l,r,m;

     long int s=0,t=0;
    scanf("%ld",&n);
    scanf("%ld",&q);

    for(i=0;i<n;i++)
    {
        scanf("%ld",&s);

        A[i]=t=t+s;

    }
    while(q--)
   {
    scanf("%ld",&l);
    scanf("%ld",&r);
    m=A[r]-A[l-1];
    printf("%ld",m/((r-l)+1));

  }
  return 0;
}

