#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n,tc=0;
    double v,u,s,t,f;
    freopen("11715.txt","r",stdin);
    while(scanf("%d",&n)&&n!=0)
    {
        switch(n)
        {
        case 1: {
                    tc++;
                    cin>>u>>v>>t;
                    f=(double)(v-u)/t;
                    s=u*t+0.5*f*t*t;
                    printf("Case %d: %.3lf %.3lf\n",tc,s,f);
                    break;
                }
        case 2: {
                    tc++;
                    cin>>u>>v>>f;
                    t=(double)(v-u)/f;
                    s=u*t+0.5*f*t*t;
                    printf("Case %d: %.3lf %.3lf\n",tc,s,t);
                    break;
                }
        case 3: {
                    tc++;
                    cin>>u>>f>>s;
                    v=sqrt(u*u+2*f*s);
                    t=(double)(v-u)/f;
                    printf("Case %d: %.3lf %.3lf\n",tc,v,t);
                    break;
                }
        case 4: {
                    tc++;
                    cin>>v>>f>>s;
                    u=sqrt(v*v-2*f*s);
                    t=(double)(v-u)/f;
                    printf("Case %d: %.3lf %.3lf\n",tc,u,t);
                    break;
                }
        }
    }
    return 0;
}
