// swap vectors
#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
int fre[150];

using namespace std;

int main ()
{
    char *str = new char[20000];
    int i,max,c,len;
    //freopen("in.txt","r",stdin);
    //printf("%d",'a');
    while(gets(str))
    {
        for(i=65;i<125;i++) fre[i]=0;
        max=0;
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            if((str[i]>64&&str[i]<91)||(str[i]>96&&str[i]<123))
            {
                c=(int)str[i];
                fre[c]++;
                if(max<fre[c])
                max=fre[c];
            }
        }
        for(i=65;i<125;i++)
            if(fre[i]==max)
                printf("%c",i);
        printf(" %d\n",max);
    }

  return 0;
}
