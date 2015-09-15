#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
#include<queue>
#define M 200000
using namespace std;

bool prime[M];

int main()
{

    long prime_list[100010],i,j,k=0,s,n;
    memset(prime,true,M);
    //for(i=2;i<M;i++) prime[i]=1;
   for(i=2;i<=sqrt(M);i++)
    {
          if(prime[i]==true)
            for(j=i*2;j<M;j+=i)
                prime[j]=0;
    }
  for(i=2;i<M-1;i++)
    {
         if((prime[i]==1)&&(prime[i+2]==1))
              {
                   prime_list[k]=i;
                   k++;
              }
    }
   while(cin>>s)
   {
      cout<<"("<<prime_list[s-1]<<", "<<prime_list[s-1]+2<<")"<<endl;
   }
    return 0;
}
