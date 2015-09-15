#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
#include<queue>
#define M 900000
using namespace std;

int main()
{
    bool prime[M];
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
         if((prime[i]==1)&&(prime[i+2]==0))
              {
                   prime[i]=0;
              }
    }
   while(cin>>s)
   {
   k=0;
   for(i=2;s!=k;i++)
   {
      if(prime[i]==1)k++; 
      }       
      cout<<"("<<i<<", "<<i+2<<")"<<endl;
   }                        
    return 0;                   
}
