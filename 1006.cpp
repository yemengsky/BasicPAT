#include "stdio.h"

void print_num(int n)
{
	int hundigit=n/100,tendigit=(n/10)%10,lastdigit=n%10;
	while(hundigit--)	putchar('B');
	while(tendigit--)   putchar('S');
	for(int i=1;i<=lastdigit;i++) putchar(i+'0');
	putchar('\n');
}
int main(void)
{
	int n=0;
	scanf("%d",&n);
	print_num(n);
	return 0;
}
