#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10000000],i,j,n,q,x,y,op,sum;
    scanf("%d%d",&n,&q);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    while(q--)
     {sum=0;

    scanf("%d%d%d",&op,&x,&y);
    if(op==1)
    {
        a[x]=y;
    }
    else
    {
        for(i=x;i<=y;i++)
            sum=sum+a[i];
        printf("%d\n",sum);

    }




}
return 0;
}
