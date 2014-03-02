#include "stdio.h"
#include "string.h"

int main(void)
{
	char highname[10],highclass[10],lowname[10],lowclass[10],tempname[10],tempclass[10];
	int highscore=0,lowscore=100,tempscore,n;
	scanf("%d",&n);

	while(n--)
	{
		fflush(stdin); //此处用于清除每次输入的时候的enter
		scanf("%s %s %d",tempname,tempclass,&tempscore);
		if(tempscore>=highscore)
		{
			strcpy(highname,tempname);
			strcpy(highclass,tempclass);
			highscore=tempscore;
		}
		if(tempscore<=lowscore)
		{
			strcpy(lowname,tempname);
			strcpy(lowclass,tempclass);
			lowscore=tempscore;
		}
	}
	printf("%s %s\n",highname,highclass);
	printf("%s %s\n",lowname,lowclass);
	return 0;
}
