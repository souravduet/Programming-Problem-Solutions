#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<math.h>
#include<cstring>
#include<string>
#define N 1000000

using namespace std;
bool factor[N];
long factor_list[N];
int i,a=2,b=3,c=5,k=1,s;
int main()
{

    memset(factor,false,sizeof(factor));
    factor[1]=true;
    for(;a<N;a*=2)
    {
        factor[a]=1;
        factor[a*3]=1;
        factor[a*5]=1;

    }
    for(;b<N;b*=3)
    {
        factor[b]=1;
        factor[b*2]=1;
        factor[b*5]=1;
    }
    for(;c<N;c*=5)
    {
        factor[c]=1;
        factor[c*3]=1;
        factor[c*2]=1;
    }
    a=2;b=3;c=5;
    while(s<N)
    {
        s=c*6;
        factor[s]=1;
        factor[a*15]=1;
        factor[b*10]=1;
        a*=2;b*3;c*=5;
    }
    for(i=1;i<N;i++)
    {
        if(factor[i]==1)
            factor_list[k++]=i;
    }
    for(int j=1;j<k;j++)
    cout<<factor_list[j]<<" ";
    return 0;
}
