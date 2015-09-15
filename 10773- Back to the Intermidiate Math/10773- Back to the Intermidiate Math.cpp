#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<math.h>
#include<cmath>

using namespace std;

int main()
{
    int tc,d,u,v,i;
    double result;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>d>>v>>u;
        if(u==0||v>=u)
        cout<<"Case "<<i<<": "<<"can't determine"<<endl;
        else
        {
            //result=fabs(d/sqrt(u*u-v*v)*1.0)-((double)d/u);
            result=fabs(((double)d/u)-(d/sqrt(u*u-v*v)*1.0));
            printf("Case %d: %.3lf\n",i,result);
        }
    }
    return 0;
}
