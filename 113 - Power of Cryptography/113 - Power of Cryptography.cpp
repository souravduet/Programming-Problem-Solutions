#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    double p,n,k;
    while(scanf("%lf %lf",&n,&p)&&p&&n)
    {
        k=pow(p,1.0/n);
        printf("%.0lf\n",k);
    }
    return 0;
}
