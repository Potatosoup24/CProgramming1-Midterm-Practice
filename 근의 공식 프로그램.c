#include <math.h>
#define _NO_SECURE_WARNINGS
#include <stdio.h>
int main(void) //���� ���� ���α׷�
{
	int a;
	int b;
	int c;
	printf("a�� �Է��Ͻÿ� : ");
	scanf_s("%d", &a);
	printf("b�� �Է��Ͻÿ� : ");
	scanf_s("%d", &b);
	printf("c�� �Է��Ͻÿ� : ");
	scanf_s("%d", &c);
	double K;
	if (b * b - 4 * a * c >= 0) {
		K = sqrt((b * b) - (4 * a * c));
		double num1;
		double num2;
		num1 = (-b + K) / (2 * a);
		num2 = (-b - K) / (2 * a);
		printf("�������� �� ���� ���� %.11lf, %.11lf�Դϴ�.", num1, num2);
	}
	else {
		printf("�Ǳ��� ������ �ʽ��ϴ�.");
	}

	return 0;
}