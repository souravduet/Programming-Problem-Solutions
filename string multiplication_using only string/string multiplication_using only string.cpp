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
char array1[100],array2[40],array3[150];

int main()
{
    int i,k,a,b,j,c=0,sum=0,len1,len2;
    while(1)
    {
        gets(array1);
        gets(array2);
        len1=strlen(array1);
        //for(len1=0;array1[len1]!='\0';len1++);
        //for(len2=0;array2[len2]!='\0';len2++);
        len2=strlen(array2);
        //for(i=0;i<len1+len2;i++)
        //{
           // array3[i]='0';
        //}

        memset(array3,'0',len1+len2);
        array3[len1+len2]='\0';
        cout<<len1<<"  "<<len2<<endl;
        for(i=len2-1;i>=0;i--)
        {
            c=0;
            b=array2[i]-48;
            for(j=len1-1;j>=0;j--)
            {
                a=array1[j]-48;
                sum=a*b+c+array3[i+j+1]-48;
                array3[i+j+1]=sum%10+48;
                c=sum/10;
            }
            array3[i+j+1]+=c;
        }

        for(i=0;array3[i]!='\0';i++)
        {
            cout<<array3[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
