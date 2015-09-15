#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n,sum,i,k;
    freopen("382.txt","r",stdin);
    cout<<"PERFECTION OUTPUT"<<endl;
    while(scanf("%d",&n)&&n!=0)
    {
        if(n==1)printf("%5d  DEFICIENT\n",n);
        else {
            sum=1;k=n/2;
            for(i=2;i<=k;i++)
            {
                if(n%i==0)sum+=i;
            }
            if(sum==n)printf("%5d  PERFECT\n",n);
            else if(sum<n)printf("%5d  DEFICIENT\n",n);
            else printf("%5d  ABUNDANT\n",n);
            }
    }
    cout<<"END OF OUTPUT"<<endl;
}
