#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
#include<queue>
#define M 1000
#define N 100

using namespace std;
int array [M][N]={0};
int main()
{
    int i,j,sum,carry,a,temp_array[4],k;
    array[0][0]=1;
    for(i=1;<M;i++)
    {
        a=i;k=3;
        while(a!=0)
        {
            temp_array[k--]=a%10;
            a/=10;
        }
    }
    return 0;
}
