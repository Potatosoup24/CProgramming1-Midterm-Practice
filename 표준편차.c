//ǥ�������� ���ϴ� ���α׷�
#include <math.h>
#include <stdio.h>
int main(void)
{
	double num1;
	double num2;
	double num3;
	double num4;
	double num5;
	printf("num1�� �Է��Ͻÿ�. : ");
	scanf_s("%lf", &num1);
	printf("num2�� �Է��Ͻÿ�. : ");
	scanf_s("%lf", &num2);
	printf("num3�� �Է��Ͻÿ�. : ");
	scanf_s("%lf", &num3);
	printf("num4�� �Է��Ͻÿ�. : ");
	scanf_s("%lf", &num4);
	printf("num5�� �Է��Ͻÿ�. : ");
	scanf_s("%lf", &num5);
	double everage;
	everage = (num1 + num2 + num3 + num4 + num5) / 5;

	double K;
	K = (num1 - everage) * (num1 - everage) + (num2 - everage) * (num2 - everage) + (num3 - everage) * (num3 - everage) + (num4 - everage) * (num4 - everage) + (num5 - everage) * (num5 - everage);
	double answer;
	answer = sqrt(K / 5);
	printf("ǥ�������� %.20lf", answer);
	
	return 0;

}
