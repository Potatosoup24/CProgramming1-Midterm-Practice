#include <stdio.h>
#include <math.h>
#define _NO_SECURE_WARNINGS
int main2(void)
{
	double Humid, Temp;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%lf", &Humid);
	printf("���� �µ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &Temp);
	double d1;
	d1 = log(Humid / 100) + ((17.62 * Temp) / (243.12 + Temp));
	double DewPoint;
	DewPoint = (243.12 * d1) / (17.62 - d1);
	printf("�̽��� �µ��� %.9lf �Դϴ�", DewPoint); //�Ҽ��� �Ʒ� 9�ڸ������� ���
	return 0;
}