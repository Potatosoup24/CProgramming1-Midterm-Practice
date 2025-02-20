#include <math.h>
#define _NO_SECURE_WARNINGS
#include <stdio.h>
int main(void) //근의 공식 프로그램
{
	int a;
	int b;
	int c;
	printf("a를 입력하시오 : ");
	scanf_s("%d", &a);
	printf("b를 입력하시오 : ");
	scanf_s("%d", &b);
	printf("c를 입력하시오 : ");
	scanf_s("%d", &c);
	double K;
	if (b * b - 4 * a * c >= 0) {
		K = sqrt((b * b) - (4 * a * c));
		double num1;
		double num2;
		num1 = (-b + K) / (2 * a);
		num2 = (-b - K) / (2 * a);
		printf("방정식의 두 근은 각각 %.11lf, %.11lf입니다.", num1, num2);
	}
	else {
		printf("실근을 가지지 않습니다.");
	}

	return 0;
}