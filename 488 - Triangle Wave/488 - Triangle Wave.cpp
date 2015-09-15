#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,a,f,i,j;
    freopen("488.txt","r",stdin);
    scanf("%d",&t);
    while(t--)
    {
        scanf("\n%d%d",&a,&f);
        while(f--)
        {
            for(i=1;i<=a;i++)
            {
                for(j=1;j<=i;j++)
                    printf("%d",i);
                printf("\n");
            }
            for(i=a-1;i>0;i--)
            {
                for(j=1;j<=i;j++)
                    printf("%d",i);
                printf("\n");
            }
            if(t>0||f>0)
            printf("\n");
        }
    }
    return 0;
}
