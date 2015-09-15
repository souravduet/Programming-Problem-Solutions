#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n;
    freopen("f91.txt","r",stdin);
    while(scanf("%d",&n)&&n!=0)
    {
        if(n>110)
            cout<<"f91("<<n<<") = "<<n-10<<endl;
        else
            cout<<"f91("<<n<<") = "<<91<<endl;
    }
    return 0;
}
