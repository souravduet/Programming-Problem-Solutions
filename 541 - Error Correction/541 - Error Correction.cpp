#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int M,array[100][100],i,j,x,y,sum,l,m,error;
    freopen("541.txt","r",stdin);
    while(scanf("%d",&M)&&M!=0)
    //while(cin>>M&&M!=0)
    {
        error=0;sum=0;
        for(i=0;i<M;i++)
            for(j=0;j<M;j++)
                cin>>array[i][j];
        for(i=0;i<M;i++)
        {
            for(j=0;j<M;j++)
            {
                if(array[i][j]==1)sum++;
            }
            if(sum%2!=0)
            {
                x=i+1;sum=0;
                if((error++)>1)
                    break;
                    cout<<error;
                for(l=0;l<M;l++)
                {
                    for(m=0;m<M;m++)
                    {
                        if(array[m][l]==1)sum++;
                    }
                    if((sum%2)!=0)
                    {
                        y=l+1;sum=0;
                        //if(array[x][y]==1)array[x][y]=0;
                        //else array[x][y]=1;
                        break;
                    }
                }
            }
        }
        if(error==0)cout<<"OK"<<endl;
        else if(error==1)cout<<"Change bit ("<<x<<","<<y<<")"<<endl;
        else cout<<"Corrupt"<<error<<endl;
    }
    return 0;
}
