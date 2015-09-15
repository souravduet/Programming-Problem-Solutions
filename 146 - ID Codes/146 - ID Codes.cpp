// next_permutation example
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main ()
{
  int n;
  char *str = new char[55];
  freopen("in.txt","r",stdin);
  while(gets(str)&&str[0]!='#')
  {
      n=0;
      n=next_permutation(str,str+strlen(str));

      if(n)
      {
          printf("%s\n",str);
      }
      else
      {
          printf("No Successor\n");
      }
  }
  return 0;
}

