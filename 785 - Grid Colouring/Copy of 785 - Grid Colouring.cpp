#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char grid[50][100];
bool color[50][100];
void dfs(int x,int y,char c);
bool valid(int x,int y);
int main()
{
    int i,j,k,x,y,n;
    char c;
    freopen("785.txt","r",stdin);
    while(gets(grid[0]))
    {
        i=1;
        for(int l=0;l<50;l++)
            memset(color[l],0,100);

        while(gets(grid[i])&&grid[i][0]!='_')
        {
            i++;
        }

        int f=0;
        //printf("%c\n",grid[3][4]);
        for(j=0;grid[j][0]!='_';j++)
        {
            for(k=0;grid[j][k]!='\0';k++)
            {
                if(color[j][k]!=1&&grid[j][k]!=' '&&grid[j][k]!='_'&&grid[j][k]!='X')
                //if(grid[j][k]=='#')
                {
                    //printf("%c j= %d, k=%d,n= %d\n",grid[j][k],j,k,n);
                    c=grid[j][k];
                    dfs(j,k,c);

                }
            }
        }

        for(i=0;grid[i][0]!='_';i++)
        {
           printf("%s\n",grid[i]);
        }
        printf("%s\n",grid[i]);
    }
    return 0;
}

void dfs(int x,int y,char c)
{
    color[x][y]=1;
    if(valid(x+1,y)==true)
    {
        grid[x+1][y]=c;
        dfs(x+1,y,c);
    }
    if(valid(x-1,y)==true)
    {
        grid[x-1][y]=c;
        dfs(x-1,y,c);
    }
    if(valid(x,y+1)==true)
    {
        grid[x][y+1]=c;
        dfs(x,y+1,c);
    }
    if(valid(x,y-1)==true)
    {
        grid[x][y-1]=c;
        dfs(x,y-1,c);
    }
}

bool valid(int x,int y)
{
    if(color[x][y]==1||x<0||y<0||grid[x][y]=='\0'||grid[x][y]=='_'||grid[x][y]=='X')
        return 0;
    else return 1;
}
