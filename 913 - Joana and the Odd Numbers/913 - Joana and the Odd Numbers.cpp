#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long n,sum;
    while(scanf("%lld",&n))
    {
        n=(n+1)/2;
        sum=6*(n*n)-9;
        printf("%lld\n",sum);
    }
    return 0;
}
