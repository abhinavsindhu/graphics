#include<stdio.h>
int main()

{
    long int l,w,h,n;

scanf("%ld",&l);

scanf("%ld",&n);

while(n)

{

scanf("%ld",&w);

 scanf("%ld",&h);

if(w>=l&&h>=l&&w!=h)

 printf("CROP IT\n");

 else if(w<l||h<l)

printf("UPLOAD ANOTHER\n");

else

printf("ACCEPTED\n");

n--;
    }

 return 0;
}
