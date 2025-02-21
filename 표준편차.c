//표준편차를 구하는 프로그램
#include <math.h>
#include <stdio.h>
int main(void)
{
	double num1;
	double num2;
	double num3;
	double num4;
	double num5;
	printf("num1를 입력하시오. : ");
	scanf_s("%lf", &num1);
	printf("num2를 입력하시오. : ");
	scanf_s("%lf", &num2);
	printf("num3를 입력하시오. : ");
	scanf_s("%lf", &num3);
	printf("num4를 입력하시오. : ");
	scanf_s("%lf", &num4);
	printf("num5를 입력하시오. : ");
	scanf_s("%lf", &num5);
	double everage;
	everage = (num1 + num2 + num3 + num4 + num5) / 5;

	double K;
	K = (num1 - everage) * (num1 - everage) + (num2 - everage) * (num2 - everage) + (num3 - everage) * (num3 - everage) + (num4 - everage) * (num4 - everage) + (num5 - everage) * (num5 - everage);
	double answer;
	answer = sqrt(K / 5);
	printf("표준편차는 %.20lf", answer);
	
	return 0;

}
