#include<stdio.h>
//#include<conio.h>
//#include<iostream>
//#include<cstdio>
using namespace std;
int main()
{
    long i=0,a,l,sum,k;
    //freopen("694.txt","r",stdin);
    while(scanf("%ld%ld",&a,&l)==2&&a>0&&l>0)
    {
        sum=1;i++;
        k=a;
          while(k!=1)
            {
                if(k%2==1) k=3*k+1;
                else k/=2;
                if(k>l)break;
                sum++;
            }
        printf("Case %ld: A = %ld, limit = %ld, number of terms = %ld\n",i,a,l,sum);
    }
    return 0;
}
