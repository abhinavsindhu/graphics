#include <stdio.h>
#include <stdlib.h>
int completestr(char[]);
int main()
{
    char str[100];
    int t,flag;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        flag=completestr(str);
        if(flag==0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
    int completestr(char a[])
    { int i=0,first[26]={0};
        while(a[i])
        {
            first[a[i]-'a']++;
            i++;
        }
        i=0;
        while(i<26)
        {
            if(first[i]<1)
                return 0;
                i++;
        }
        return 1;
    }

