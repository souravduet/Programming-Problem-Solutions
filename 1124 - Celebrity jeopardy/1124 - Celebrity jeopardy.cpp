#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cmath>
#define pi 2.0*acos(0.0)
using namespace std;
int main()
{
    int n;
    char *str= new char[10000];
    freopen("in.txt","r",stdin);
    while(gets(str))
    {
        n=strlen(str);
        for(int i=0;i<n;i++)
            printf("%c",str[i]);
        printf("\n");
    }
    return 0;
}
