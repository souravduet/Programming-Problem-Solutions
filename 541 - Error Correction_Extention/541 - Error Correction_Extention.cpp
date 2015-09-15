#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int M,array[100][100],sum_array[2][100],i,j,x,y,sum,error,error2;
    //freopen("541.txt","r",stdin);
    while(scanf("%d",&M)&&M!=0)
    {
        error=0,error2=0;
        for(i=0;i<M;i++)
        {
            sum_array[0][i]=0;
            sum_array[1][i]=0;
        }
        for(i=0;i<M;i++)
        {
            for(j=0;j<M;j++)
            {
                cin>>array[i][j];
                sum_array[0][i]+=array[i][j];
            }
        }
        for(i=0;i<M;i++)
        {
            for(j=0;j<M;j++)
            {
                sum_array[1][i]+=array[j][i];
            }
        }
        for(i=0;i<M;i++)
        {
            if(sum_array[0][i]%2!=0)
            {
                error++;x=i+1;
            }
            if(sum_array[1][i]%2!=0)
            {
                error2++;
                y=i+1;
            }
        }
        if(error<error2)error=error2;
        if(error==0)cout<<"OK"<<endl;
        else if(error==1)cout<<"Change bit ("<<x<<","<<y<<")"<<endl;
        else cout<<"Corrupt"<<endl;
    }
    return 0;
}
