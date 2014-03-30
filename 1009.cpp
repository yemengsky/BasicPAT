// 1009.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
//#include "windows.h"
#include "stdio.h"
#include "math.h"
int isfirst=true;
void reverse(void) {
	char temp[80];
	if(scanf("%s",temp)!=EOF) {
		reverse();
		if(isfirst!=true)
			printf(" ");
		printf("%s",temp);
		isfirst=false;
	}
	return;
}
int main(void) {
	reverse();
	//	system("pause");
	printf("\n");
	return 0;
}