#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <utility>
#include <set>
#include <math.h>
using namespace std;
int N;
int simulation (int m)
{
    list <int> l;
    int i;
    for (i = 1; i <= N; i++)
        l.push_back (i);
    while ( l.size () > 1 )
    {
        l.pop_front ();
        for (i = 1; i < m; i++)
       {
            l.push_back ( l.front () );
            l.pop_front ();
        }
     }
    return l.front ();
}

int main ()
{
    while (scanf ("%d", &N))
   {
        if (N == 0)
            return 0;
        int m = 1;
        int region = 0;
        while (1)
       {
            region = simulation (m);
            if (region == 13)
                break;
             m++;
        }
        printf("%d\n", m);
    }
    return 0;
}
