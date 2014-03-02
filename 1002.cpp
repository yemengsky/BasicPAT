#include "stdio.h"
#include "stdlib.h"

char* numstr[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int spltNum(int n)
{
  if(n>9)
  {  
    int temp=n%10;
    spltNum(n/10);
    printf(" %s",numstr[temp]);
  }
  else
    printf("%s",numstr[n]);
  return n;
}
int main(void)
{
  char c;
  int res=0;
  while(scanf("%c",&c)!=EOF)
  {
    if((c>='0')&(c<='9'))
      res+=c-'0';
  }
  spltNum(res);
  return 0;
}
