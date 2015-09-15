#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    long long j=0;
    int i,n;
    bool f;
    vector<int>array,a2;
    freopen("in.txt","r",stdin);
    while(scanf("%d",&n)==1)
    {
        f=1;
        for(i=0;i<j;i++)
        {
            if(array[i]==n)
            {
                a2[i]++;
                f=0;
            }
        }
        if(f)
            {
                array.push_back(n);
                a2.push_back(1);
                j++;
            }
    }
    for(i=0;i<j;i++)
    {
        printf("%d %d\n",array[i],a2[i]);
    }
    return 0;
}
