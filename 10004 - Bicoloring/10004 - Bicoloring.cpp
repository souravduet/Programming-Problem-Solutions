#include <iostream>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstdio>
using namespace std;

int numberOfNode;
struct NODE
{
    int color;
    vector<int> addjacent_list;
}graph[201];
//vector<NODE>graph;


bool check_bipartite()
{
    int start=0;
        queue<int>myqueue;
        myqueue.push(start);
        graph[start].color=0;
        while(!myqueue.empty())
        {
            int nodeNumber=myqueue.front();
            for(int i=0;i<graph[nodeNumber].addjacent_list.size();i++)
            {
                int adjaID=graph[nodeNumber].addjacent_list[i];
                if(graph[adjaID].color==-1)
                {
                    graph[adjaID].color=(graph[nodeNumber].color+1)%2; //for assaign max two color
                    myqueue.push(adjaID);
                }
                else
                {
                    if(graph[nodeNumber].color==graph[adjaID].color)
                    return false;
                }
            }
            myqueue.pop();
        }
    return true;
}



int main()
{
    int numberOfEdge,i,s,d;

    freopen("10004 - Bicoloring.txt","r",stdin);

    while(scanf("%d",&numberOfNode)==1&&numberOfNode!=0)
    {
        scanf("%d",&numberOfEdge);

        //clear vector
        //memset(graph.color,-1,numberOfNode);
        for(i=0;i<numberOfNode;i++)
        {
            graph[i].color=-1;
            graph[i].addjacent_list.clear();
        }


        for(i=0;i<numberOfEdge;i++)
        {
            scanf("%d%d",&s,&d);
            graph[s].addjacent_list.push_back(d);

        }

        if(check_bipartite()==1)
        {
            printf("BICOLORABLE.\n");
        }
        else
        {
            printf("NOT BICOLORABLE.\n");
        }
    }

    return 0;
}
