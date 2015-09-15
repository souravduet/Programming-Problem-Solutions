#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char grid[50][100];
bool color[50][100];
void dfs(int x,int y);
bool valid(int x,int y);
int main()
{
    int i,j,k,x,y,n;
    freopen("784.txt","r",stdin);
    scanf("%d\n",&n);
    while(n--)
    {
        i=0;
        for(int l=0;l<50;l++)
            memset(color[l],0,100);

        while(gets(grid[i])&&grid[i][0]!='_')
        {
            i++;
        }

        int f=0;
        //printf("%c\n",grid[4][8]);
        for(j=0;j<strlen(grid[j]);j++)
        {
            for(k=0;grid[j][k]!='\0';k++)
            {
                if(grid[j][k]=='*')
                {
                    //printf("%c j= %d, k=%d,n= %d\n",grid[j][k],j,k,n);
                    grid[j][k]='#';
                    dfs(j,k);
                    break;
                }
            }

            if(f) break;
        }

        for(i=0;grid[i][0]!='_';i++)
        {
           printf("%s\n",grid[i]);
        }
        printf("%s\n",grid[i]);
    }
}
void dfs(int x,int y)
{
    color[x][y]=1;
    if(valid(x+1,y)==true)
    {
        grid[x+1][y]='#';
        dfs(x+1,y);
    }
    if(valid(x-1,y)==true)
    {
        grid[x-1][y]='#';
        dfs(x-1,y);
    }
    if(valid(x,y+1)==true)
    {
        grid[x][y+1]='#';
        dfs(x,y+1);
    }
    if(valid(x,y-1)==true)
    {
        grid[x][y-1]='#';
        dfs(x,y-1);
    }
}

bool valid(int x,int y)
{
    if(color[x][y]==1||x<0||y<0||grid[x][y]=='\0'||grid[x][y]=='_'||grid[x][y]=='X')
        return 0;
    else return 1;
}
