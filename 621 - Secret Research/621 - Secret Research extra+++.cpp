#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n,l;
    char text[1000];
    freopen("621.txt","r",stdin);
    scanf("%d\n",&n);
    while(n--)
    {
        scanf("%s",text);
        l=strlen(text);
        int i=atoi(text);
        if(i==1||i==4||i==78)
            printf("+\n");
        else if((text[l-1])=='5'&&(text[l-2]=='3'))
            printf("-\n");
        else if((text[0]-48)==9&&text[l-1]=='4')
            printf("*\n");
        else
            printf("?\n");
    }
    return 0;
}
