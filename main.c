#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i=0,no_da=0;
    scanf("%s",str);
    while(str[i])
    {
        switch(str[i])
        {
            case 48:no_da=no_da+6;i++;
                    break;
            case 49:no_da=no_da+2;i++;
                    break;
            case 50:no_da=no_da+5;i++;
                    break;
            case 51:no_da=no_da+5;i++;
                    break;
            case 52:no_da=no_da+4;i++;
                    break;
            case 53:no_da=no_da+5;i++;
                    break;
            case 54:no_da=no_da+6;i++;
                    break;
            case 55:no_da=no_da+3;i++;
                    break;
            case 56:no_da=no_da+7;i++;
                    break;
            case 57:no_da=no_da+6;i++;
        }
    }
    printf("%d",no_da);
    return 0;
}
