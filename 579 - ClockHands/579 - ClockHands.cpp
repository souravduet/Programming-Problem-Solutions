#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int h,m;
    char a;
    double dif,result;
    //freopen("579.txt","r",stdin);
    while(scanf("%d%c%d",&h,&a,&m)&&(h!=0||m!=0))
    {
        if(m==0)
        {
            dif=60-5.0*h;
        }
        else
            dif=abs((5.0*h)+(5.0/60.0)*m-m);
        result=dif*6.0;
        if(result>180)result=(double)(360.0-result);
        printf("%.3f\n",result);
    }
}
