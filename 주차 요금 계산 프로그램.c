#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char GRADE;
	int pay_money;
	int parking_time;

	printf("������� ��� ���α׷��Դϴ�.\n");
	printf("ȸ�� ����� �Է����ֽʽÿ�(P,G,S,F,N �� �ϳ�) : ");
	scanf(" %c", &GRADE);
	printf("\n");
	printf("������ ���� �Է��Ͻÿ�(���ڸ�) : ");
	scanf(" %d", &pay_money);
	printf("\n");
	printf("���� �ð��� �Է����ּ���(�� ������) : ");
	scanf("%d", &parking_time);
	printf("\n");

	if (GRADE == 'P' || GRADE == 'G') 
	{
		printf("2�ð� ���� �����Դϴ�");
		if (parking_time >= 120) 
		{
			printf("%d�� ��ŭ�� ��ݸ� �����ϸ� �˴ϴ�.\n", parking_time - 120);
			printf("%d���� �߰� ����� �������ֽʽÿ�.\n", ((parking_time - 120) - (parking_time % 10))*100);
		}
		else 
		{
			printf("2�ð��� �ʰ����� �ʾ����Ƿ� ���� ���̻� �����Ͻ� �ʿ䰡 �����ϴ�.");
		}
	}
	else if (GRADE == 'S' || GRADE == 'F') 
	{
		if (pay_money >= 30000 && ) 
		{
			printf("2�ð� ������ �����Դϴ�.\n");
			printf("%d�� ��ŭ�� ��ݸ� �����ϸ� �˴ϴ�.\n",parking_time-120);
			printf("%d���� �߰� ����� �������ֽʽÿ�.\n", ((parking_time - 120) - (parking_time % 10)) * 100);

		}
		else if (pay_money >= 10000) 
		{
			printf("1�ð� ������ �����Դϴ�.\n");
			printf("%d�� ��ŭ�� ��ݸ� �����ϸ� �˴ϴ�.\n", parking_time - 60);
			printf("%d���� ����� �������ֽʽÿ�.\n", ((parking_time - 60) - (parking_time % 10)) * 100);
		}
		else 
		{
			printf("���� ���� ������ �����ϴ�.");
			printf("%d�� ��ŭ�� ����� ������ �ֽʽÿ�.\n", parking_time);
			printf("%d���� ����� �������ֽʽÿ�.\n", ((parking_time) - (parking_time % 10)) * 100);
		}
	}
	else if (GRADE =='N')
	{
		if (pay_money >= 50000 && parking_time > 120)
		{
			printf("2�ð� ������ �����Դϴ�.\n");
			printf("%d�� ��ŭ�� ��ݸ� �����ϸ� �˴ϴ�.\n", parking_time - 120);
			printf("%d���� ����� �������ֽʽÿ�.\n", ((parking_time - 120) - (parking_time % 10)) * 100);
		else if (pay_money >= 50000 && parking_time <= 120)
		{
			printf("2�ð� ������ �����Դϴ�.\n");
			printf("�߰� ����� �����Ͻ� �ʿ䰡 �����ϴ�.");
		}
		else if (pay_money >= 30000 && parking_time > 60)
		{
			printf("1�ð� ������ �����Դϴ�.\n");
			printf("%d�� ��ŭ�� ��ݸ� �����ϸ� �˴ϴ�.\n", parking_time - 60);
			printf("%d���� ����� �������ֽʽÿ�.\n", ((parking_time - 60) - (parking_time % 10)) * 100);
		else if (pay_money >= 30000 && parking_time <= 60)
		{
			printf("1�ð� ������ �����Դϴ�.\n");
			printf("�߰� ����� �����Ͻ� �ʿ䰡 �����ϴ�.");
		}
		else
		{
			printf("%d�� ��ŭ�� ��ݸ� �����ϸ� �˴ϴ�.\n", parking_time);
			printf("%d�� �������ּ���.\n", (parking_time - (parking_time % 10)) * 100);
		}
		}
		else
		{
			printf("�߸��� ����� �Է��Ͽ����ϴ�. �ٽ� �õ����ּ���");
		}
		return 0;
}