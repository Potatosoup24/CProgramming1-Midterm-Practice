#define _NO_SECURE_WARNINGS
#include <stdio.h>

int main(void)
{
	int sec; //	�ʸ� �Է��ϸ� �ð� �� �� �� ��Ÿ���� ���α׷�
	printf("�ʸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &sec);
	int boon,cho;
	boon = (sec / 60);
	cho = (sec % 60);
	if (boon >= 60) {
		int hour;
		hour = boon / 60;
		boon = boon % 60;
		printf("%d�ð� %d�� %d��",hour, boon, cho);
	}
	else {
		printf("%d�� %d��", boon, cho);
	}
	return 0;
}