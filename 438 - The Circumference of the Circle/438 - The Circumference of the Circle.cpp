/*
First, compute a,b,c where a,b,c are the length of Triangle side
Find S where S is (a+b+c)/2 (1/2 of triangle’s circumference)
Find L =sqrt(s*(s-a)*(s-b)*(s-c))
Compute r:=(a*b*c)/(4*L) (R= half diameter of the circle)
Output (2*Pi*r) (the circumference of circle)
*/


#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cmath>
#define pi 2.0*acos(0.0)
using namespace std;
int main()
{
    double x1,y1,x2,y2,x3,y3,s,area,a,b,c,ans,r;

    freopen("in.txt","r",stdin);

    while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
    {
        a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
        c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
        s=(a+b+c)/2.0;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        r=(a*b*c)/(4.0*area);
        ans=2.0*pi*r;
        printf("%.2lf\n",ans);
    }
    return 0;
}
