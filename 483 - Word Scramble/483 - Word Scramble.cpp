#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    char text[500];
    int n,i,l,c=0;
    bool flag;
    freopen("483.txt","r",stdin);
    while(gets(text))
    {
        flag=1; l=strlen(text);
        for(i=0;i<l;i++)
        {

            if(text[i]!=' '&&i<l-1)
            {
                c++;
            }
            else
                {
                    if(i!=l-1)
                    {
                        for(int j=i-1;j>=i-c;j--)
                            printf("%c",text[j]);
                            printf(" ");
                    }
                    else
                    {
                        for(int j=i;j>=i-c;j--)
                            printf("%c",text[j]);
                        printf("\n");
                    }
                    c=0;
                }
        }

    }
    return 0;
}
