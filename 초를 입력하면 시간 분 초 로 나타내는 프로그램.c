#define _NO_SECURE_WARNINGS
#include <stdio.h>

int main(void)
{
	int sec; //	초를 입력하면 시간 분 초 로 나타내는 프로그램
	printf("초를 입력하시오: ");
	scanf_s("%d", &sec);
	int boon,cho;
	boon = (sec / 60);
	cho = (sec % 60);
	if (boon >= 60) {
		int hour;
		hour = boon / 60;
		boon = boon % 60;
		printf("%d시간 %d분 %d초",hour, boon, cho);
	}
	else {
		printf("%d분 %d초", boon, cho);
	}
	return 0;
}