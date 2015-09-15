#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int tc,i;
    double c,f;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%lf%lf",&c,&f);
        c=c+(5.0/9.0)*f;
        printf("Case %d: %0.2lf\n",i,c);
    }
    return 0;
}
