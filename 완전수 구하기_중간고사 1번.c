//1��. �������� �ڱ� �ڽ��� ������ ���� ����� ���� �ڱ� �ڽ��� �Ǵ� ���� �����̴�.
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int yaksu_sum(int N); //�Լ� ����

int main(void)
{
	int num;
	printf("1���� num������ �������� Ȯ���մϴ�. num�� �Է��ϼ��� : ");//�������� �ڽ��� �� ��� ������� ���� �ڽŰ� ���� ��
	scanf_s("%d", &num);
	for (int i = 1; i <= num; i++) {  //1���� num������ �ݺ���
		if (i == yaksu_sum(i)) { //�ڱ� �ڽ��� ����� �տ��� �����ؾ� ��
			printf("������ %d\n", i);
		}
	}
	return 0;
}


int yaksu_sum(int N) { //N�� ������� ���� ��ȯ�ϴ� �Լ� ����
	int sum = 0; //������� ���� �޾��ִ� ����
	for (int i = 1; i <= N; i++) //1���� N����
	{
		if (N % i == 0) { //����̸�
			sum = sum + i; //sum�� �����ش�
		}
	}
	return sum-N;  //sum-N. ����� �տ��� �ڱ� �ڽ��� �� ���� ��ȯ���ش�. 
}