#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    char array[32];
    int i,k,sum;
    while(gets(array)&&array[0]!=48)
    {
        sum=0;
        int l=strlen(array);
        for(i=0;array[i]!='\0';i++)
        {
            sum+=(array[i]-48)*(pow(2,l--)-1);
        }
        printf("%d\n",sum);
    }
    return 0;
}
