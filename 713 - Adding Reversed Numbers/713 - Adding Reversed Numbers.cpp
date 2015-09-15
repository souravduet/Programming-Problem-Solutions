#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;

int main()
{
    char *str = new char[201];
    char *str1 = new char[201];
    char *str2 = new char[205];
    int i,n,len,len2,s,c,j;
    //freopen("in.txt","r",stdin);

    scanf("%d\n",&n);
    while(n--)
    {
        cin>>str>>str1;
        len=strlen(str);
        len2=strlen(str1);
		c=0;
        if(len<len2)
        {
            for(i=0;i<len;i++)
            {
                s=(str[i]-48)+(str1[i]-48)+c;
                str2[i]=(s%10)+48;
                c=s/10;
            }
            for(;i<len2;i++)
            {
                s=str1[i]+c-48;
                str2[i]=(s%10)+48;
                c=s/10;
            }
            if(c!=0)
                str2[i++]=c+48;
            str2[i]='\0';

        }
        else
        {
            for(i=0;i<len2;i++)
            {
                s=(str[i]-48)+(str1[i]-48)+c;
                str2[i]=(s%10)+48;
                c=s/10;
            }
            for(;i<len;i++)
            {
                s=str[i]+c-48;
                str2[i]=(s%10)+48;
                c=s/10;
            }
            if(c!=0)
                str2[i++]=c+48;
            str2[i]='\0';
        }
        j=0;
        while(1)
        {
            if(str2[j]=='0')
                j++;
            else
                break;
        }
        for(i=j;i<strlen(str2);i++)
        {
            printf("%c",str2[i]);
        }
        printf("\n");
    }

    return 0;
}
