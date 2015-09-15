#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<cstdlib>
#include<algorithm>
#include<stdio.h>

using namespace std;

bool visit[250];
int dist[250];
int length[210];

char vstr [201][12];
vector<int>adjacent_list[210];

bool chack_adja(int x,int y)
{
    int c=0,i;
    for(i=0;i<length[x];i++)
    {
        if(vstr[x][i]!=vstr[y][i])
            c++;
        if(c>1)
            {
                return false;
            }
    }
    return true;
}
int BFS(int source, int destination)
{
    int i,x;
    visit[source]=1;
    queue<int>myq;
    myq.push(source);
    dist[source]=0;
    while(!myq.empty())
    {
        int f=myq.front();
        for(i=0;i<adjacent_list[f].size();i++)
        {
            x=adjacent_list[f][i];
            if(visit[x]!=1)
            {
                visit[x]=1;
                dist[x]=dist[f]+1;
                myq.push(x);
            }
        }
        myq.pop();
    }
    return dist[destination];
}
int main()
{
    int n,i,j,m,s,d,c;
    char stri[30],str2[12],str3[12];
    bool f=0;
	//freopen("429 - Word Transformation.txt","r",stdin);
	//freopen("write.txt","w",stdout);
    scanf("%d\n",&n);
    while(n--)
    {
        j=0;
        for(i=0;i<201;i++)
        {
            visit[i]=0;
            adjacent_list[i].clear();
            dist[i]=0;
        }

        while(gets(vstr[j])&&vstr[j][0]!='*')
        {
            length[j]=strlen(vstr[j]);
            j++;
        }
        for(i=0;i<j;i++)
        {
            for(m=i+1;m<j;m++)
            {
                if(length[i]==length[m])
                {
                    if(chack_adja(i,m))
                    {
                        adjacent_list[i].push_back(m);
                        adjacent_list[m].push_back(i);
                    }
                }
            }
        }

       /* for(i=0;i<j;i++){printf("vstr[%d]= %s\t",i,vstr[i]);
            for(m=0;m<adjacent_list[i].size();m++)
                printf("%d\t",adjacent_list[i][m]);
                printf("\n");}*/

        if(f) { printf("\n");} f=1;
        while( gets(stri))
		{
		    if(strlen(stri)==0) break;
            sscanf(stri,"%s %s",str2,str3);
            s=strlen(str2);
            for(i=0;i<j;i++)
            {
                if(s==length[i])
                    {
						if(strcmp(vstr[i],str2)==0){s=i;break;}
                    }
            }
            d=strlen(str3);
            for(i=0;i<j;i++)
            {
                if(d==length[i])
                    {
						if(strcmp(vstr[i],str3)==0){d=i;break;}
                    }
            }
            for(i=0;i<202;i++) visit[i]=0;
			s=BFS(s,d);
            printf("%s %s %d\n",str2,str3,s);
        }
    }
    return 0;
}
