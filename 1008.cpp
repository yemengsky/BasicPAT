//#include "windows.h"
#include "stdio.h"
#include "math.h"
#include	<vector>  
using namespace std;

int main(void)
{
	int len=0,gap=0;
	scanf("%d %d",&len,&gap);
	vector<int> array(len);
	for(int i=0;i<len;i++)
		scanf("%d",&array[(i+gap)%len]);
	for(int i=0;i<len;i++)
	{
		printf("%d",array[i]);
		if(i!=len-1)
			printf(" ");
		else
			printf("\n");
	}
//	system("pause");
	return 0;
}
