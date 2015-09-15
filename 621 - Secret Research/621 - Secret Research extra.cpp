#include<iostream>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<algorithm>

using namespace std;

int main()
{
    int n,s;
    char text[1000];
    freopen("621.txt","r",stdin);
    scanf("%d\n",&n);
    while(n--)
    {
        gets(text);s=0;
        for(int i=0;text[i]!='\0';i++)
            if(isdigit(text[i])) s=s*10+(text[i]-48);
        if(s==1||s==4||s==78)
            printf("+\n");
        else if(s==135||s==435||s==7835)
            printf("-\n");
        else if(s==914||s==944||s==9784)
            printf("*\n");
        else
            printf("?\n");
    }
    return 0;
}
