//3��. ������� ����, ����� ��� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //3�� ���� 1�� ������ ������� ���� �˷��ִ� ���α׷�. ������� ���

int num_of_gongyaksu(int num1, int num2, int num3, int* gongyaksu_array);//�Լ� ����

int main(void)
{
	int num1;
	int num2;
	int num3;
	int gongyaksu_Array[100];
	printf("���� �� ���� ����1-����2-����3 ���·� �Է��ϼ���:");
	scanf("%d-%d-%d", &num1, &num2, &num3);//num1-num2-num3 �� ���·� �Է��ؾ� ��.

	int result = num_of_gongyaksu(num1, num2, num3, gongyaksu_Array);//������� ���� ���
	printf("\n������� ���� : %d\n", result);

	printf("�����: ");
	for (int i = 0; i < result; i++) {
		printf("%d ", gongyaksu_Array[i]);
	}
}

//�����͸� �̿��ϸ� ���� ������ �Ѱ踦 �غ��� �� �ִ�.

int num_of_gongyaksu(int num1, int num2, int num3, int* gongyaksu_array)//������� ������ ��ȯ�ϴ� �Լ�.
//������� �Ķ���ͷ� ���� int* ������ �ִ´�. 
{
	int nums_gongyaksu = 0;//������� ��. ������� 1�� ���� ������ 1�� Ŀ��
	//���� �ϳ��� ������� ���� �ϳ� �ƹ��ų����� ���� Ŀ�� �� ����. 2~�����ϳ� �� ������ ���������� ���ϸ� ����� ���θ� �Ǵ� �����ϴ�.
	for (int K = 2; K <= num1; K++) {//2�������� ���� Ŀ�� ����. 1�� ������ ������� ã�� ���̱� ����.
		if (num1 % K == 0 && num2 % K == 0 && num3 % K == 0)//�´� ������ �������� ������� �ִٸ�..
		{

			*(gongyaksu_array+nums_gongyaksu) = K;//������� intŸ�� �迭�� �־��ش�.
			nums_gongyaksu++; //������� �ϳ� �߰��ϸ� 1�� ������� ������ ������

		}
	}
	return nums_gongyaksu;
}