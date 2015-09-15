#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    char text[1000];
    int c,s;
    freopen("494.txt","r",stdin);
    while(gets(text))
    {
        c=0;
        s=strlen(text);
        int flag=1;
        for(int i=s-1;i>=0;i--)
        {
            if(isalpha(text[i])!=0)
               {
                   if(flag)
                   {
                       c++;
                       flag=0;
                   }
               }
            else flag=1;
        }
        printf("%d\n",c);
    }
    return 0;
}
