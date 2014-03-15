//#include "windows.h"
#include "stdio.h"
#include "math.h"

bool is_prime(int n)
{
	if(n==1) return true;
	else
	{
		int mid=(int)sqrt(n*1.0);
		for(int i=2;i<=mid;i++){
			if(n%i==0) return false;
		}
		return true;
	}
}
int count_num(int n)
{
	
	if(n<5){
		return 0;
	}
	else
	{	if(n%2==0) n=n-1;
		if(is_prime(n)&&is_prime(n-2))
		{
	//		printf("%d %d\n",n,n-2);
			return count_num(n-2)+1;
		}
		else
			return count_num(n-2);
	}
}
int main(void)
{
	int n=0;
	scanf("%d",&n);
	int num=count_num(n);
	printf("%d\n",num);
	//system("pause");
	return 0;
}
