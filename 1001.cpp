#include <stdio.h>

int main(void)
{
	long n;
	int i=0;
	scanf("%d",&n);
	while(n!=1)
	{
		if(n%2==0)
		{
			n=n/2;
		}
		else
		{
			n=(3*n+1)/2;
		}
		i++;
	}
	printf("%d",i);
	return 0;
}
/*
#include <iostream>
#include <stdio.h>
using namespace std;
int main(void)
{
	long n;
	int i=0;
	//scanf("%d",&n);
	cin>>n;
	while(n!=1)
	{
		if(n%2==0)
		{
			n=n/2;
		}
		else
		{
			n=(3*n+1)/2;
		}
		i++;
	}
	//printf("%d",i);
	cout<<i<<endl;
	return 0;
}
*/
