//5��. �������� �������� ��ȯ
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int bin_to_dec(num);

int main(void)
{
	int num; //������ �Է�
	int mult2 = 1; //1,2,4,8,16....�̷��� �þ ��
	printf("������ ���·� 0���� ū ���� ���� �� ���� �Է��ϼ��� : ");
	scanf_s("%d", &num);
	printf("������ %d", bin_to_dec(num));
}

int bin_to_dec(num)
{
	int sum = 0; //10������ ��ȯ�� ���� ���̴� ���
	int lefted;//10���� num�� ���� ���� ���� ������
	int mult2 = 1; //1,2,4,8,16....�̷��� �þ ��
	//���� �ߴ� �Ǽ� : ���� ������ while�� �ȿ� �� ���� �Ǽ�����.
	while (1) // �ݺ����� ����Ǹ鼭 sum,lefted,mult2�� ���� ���ŵǾ�� �ϴµ� �ѹ� �ٽ� �ݺ��� �� ���� ������ ������ �ʱ�ȭ�Ǿ���.
	{
		lefted = num % 10;
		num = num / 10;
		sum = sum + lefted * mult2; 
		mult2 = mult2 * 2;//�ݺ��� �ѹ��� ���� ���� 2�辿!
		if (num == 0)
		{
			break;
		}
	}
	return sum;
}