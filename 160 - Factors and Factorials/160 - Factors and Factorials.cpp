#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
int prime[25];
int main()
{
    int n,s,d,t,num[26],max;
    int k=0,i,j,f;
    for(j=2;j<=100;j++)
    {
        f=1;
        for(i=2;i<j;i++)
        {
            if(j%i==0)
            {
            f=0;
            break;
            }
        }
        if(f!=0)
            prime[k++]=j;
    }
    while(scanf("%d",&n)==1&&n!=0)
    {
        max=0;num={0};
        for(j=2;j<=n;j++)
        {
        d=j;
        while(d>1)
        {
            for(t=0;;t++)
            {
                if(d%prime[t]==0)
                {
                    num[t]++;
                    d/=prime[t];
                    if(max<t) max=t;
                    break;
                }
            }
        }
        }
        printf("%3d! =",n);
        if(max>14)
        {
            for(s=0;s<15;s++)
                printf("%3d",num[s]);
            printf("\n      ");
            for(s=15;s<=max;s++)
                printf("%3d",num[s]);

        }
        else
            for(s=0;s<=max;s++)
                printf("%3d",num[s]);
        printf("\n");
    }
    return 0;
}
