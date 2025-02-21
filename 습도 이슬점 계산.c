#include <stdio.h>
#include <math.h>
#define _NO_SECURE_WARNINGS
int main2(void)
{
	double Humid, Temp;
	printf("습도를 입력하시오 : ");
	scanf_s("%lf", &Humid);
	printf("섭씨 온도를 입력하시오 : ");
	scanf_s("%lf", &Temp);
	double d1;
	d1 = log(Humid / 100) + ((17.62 * Temp) / (243.12 + Temp));
	double DewPoint;
	DewPoint = (243.12 * d1) / (17.62 - d1);
	printf("이슬점 온도는 %.9lf 입니다", DewPoint); //소수점 아래 9자리까지만 출력
	return 0;
}