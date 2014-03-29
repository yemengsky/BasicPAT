// test2_1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
//#include "windows.h"
#include "stdio.h"
#include "math.h"
using namespace std;
void daoshu(void) {
	int ratio=0,index=0,isfirst=true;
	while(scanf("%d %d",&ratio,&index)!=EOF) {
		if((isfirst==false)) {
			if(index!=0)
				printf(" %d %d",ratio*index,index-1);
			//else
			//	printf(" 0 0");
		}
		if(isfirst==true) {
			if(index!=0) {
				printf("%d %d",ratio*index,index-1);
				isfirst=false;
			} else
				printf("0 0");//不太清楚为什么这里要输出，难道是只有一组的时候就要输出？
		}
	}
	printf("\n");
	return;
}
int main(void) {
	daoshu();
	//	system("pause");
	return 0;
}