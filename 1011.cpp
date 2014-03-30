// 1011.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
//#include "windows.h"
#include "stdio.h"
#include "string.h"

int main(void) {
	int num=0;
	long a,b,c;
	scanf("%d",&num);
	for(int i=1; i<=num; i++) {
		fflush(stdin);
		scanf("%ld %ld %ld",&a,&b,&c);
		if(a+b-c>0)
			printf("Case #%d: true\n",i);
		else
			printf("Case #%d: false\n",i);
	}
	//system("pause");
	return 0;
}
