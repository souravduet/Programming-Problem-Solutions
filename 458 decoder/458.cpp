#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    char array[100];
    int l;
    //freopen("458.txt","r",stdin);
    while(gets(array))
    {
        l=strlen(array);
        for(int i=0;i<l;i++)
        {
            printf("%c",array[i]-7);
        }
        printf("\n");
    }
    return 0;
}
