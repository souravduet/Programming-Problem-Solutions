#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#define PI 3.141592653589793238

using namespace std;

int main()
{
    int a,b,c;
    double Area,s,sun,rose,R,r;
    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        s=(a+b+c)/2.0;
        Area=sqrt(s*(s-a)*(s-b)*(s-c));
        R=(a*b*c)/(4.0*Area);
        r=Area/s;
        sun=(PI*R*R)-Area;
        rose=PI*r*r;
        Area-=rose;
        printf("%.4lf %.4lf %.4lf\n",sun,Area,rose);
        //cout <<setprecision(4)<<fixed<< showpoint <<sun<<" "<<Area<< " " <<rose<<endl;

    }
    return 0;
}
