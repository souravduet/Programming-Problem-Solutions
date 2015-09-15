#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long n,sum;
    while(scanf("%lld",&n)==1)
    {
        sum=3*((n+1)*(n+1)/2-1)-6;
        printf("%lld\n",sum);
    }
    return 0;
}
