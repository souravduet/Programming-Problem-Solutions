#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>

using namespace std;
int main()
{
    char text[1000];
    int flag=1,i,s;
    //freopen("272.txt","r",stdin);
    while(gets(text))
    {
        s=strlen(text);
        for(i=0;i<s;i++)
        {
            if(text[i]=='"')
            {
                if(flag)
                {
                    printf("``");
                    flag=0;
                }
                else{
                    printf("''");
                    flag=1;
                    }
            }
            else printf("%c",text[i]);
        }
        printf("\n");
    }
    return 0;
}
