#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    int n,l;
    char text[1000];
    freopen("621.txt","r",stdin);
    scanf("%d\n",&n);
    while(n--)
    {
        gets(text);
        l=strlen(text);
        if(l<=2&&(text[0]=='1'||text[0]=='4'||text[0]=='7'))
            printf("+\n");
        else if((text[l-2]=='3')&&(text[l-1]=='5'))
            printf("-\n");
        else if((text[0]=='9'&&text[l-1]=='4'))
            printf("*\n");
        else
            printf("?\n");
    }
    return 0;
}
