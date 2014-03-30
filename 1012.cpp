// 1012.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
//#include "windows.h"
#include "stdio.h"
#include "string.h"

int main(void) {
	int num=0,n;
	int a1,a2,a3,a4,a5;
	int a2num=0,a4num=0;
	float average4=0;
	a1=a2=a3=a4=a5=0;
	scanf("%d",&num);
	for(int i=1; i<=num; i++) {
		fflush(stdin);
		scanf("%d",&n);
		if(n%10==0)
			a1+=n;
		else if(n%5==1) {
			a2+=((a2num%2==0?1:-1)*n);
			a2num++;
		} else if(n%5==2)
			a3++;
		else if(n%5==3) {
			a4+=n;
			a4num++;
		} else if(n%5==4)
			a5=(a5>n?a5:n);
	}
	if(a4num!=0)
		average4=a4*1.0/a4num;
	if(a1!=0)
		printf("%d ",a1);
	else printf("%c ",'N');
	if(a2num!=0)
		printf("%d ",a2);
	else printf("%c ",'N');
	if(a3!=0)
		printf("%d ",a3);
	else printf("%c ",'N');
	if(a4num!=0)
		printf("%.1f ",average4);
	else printf("%c ",'N');
	if(a5!=0)
		printf("%d\n",a5);
	else printf("%c\n",'N');
	//system("pause");
	return 0;
}
