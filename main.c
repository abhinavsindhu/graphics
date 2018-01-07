#include <stdio.h>
#include <stdlib.h>

int main()
{
     long long int t,no1,no2,re1=0,re2=0,r1,r2,res,re=0,md ;
     scanf("%d",&t);

     while(t--)
     {
         scanf("%lld%lld",&no1,&no2);
         while(no1)
         {
             r1=no1%10;
             no1=no1/10;
             re1=re1*10+r1;

         }

         while(no2)
         {
             r2=no2%10;
             no2=no2/10;
             re2=re2*10+r2;
         }

         res=re2+re1;
         while(res)
         {
             md=res%10;
             res=res/10;
             re=re*10+md;

         }
         printf("%lld\n",re);
     }
    return 0;
}
