//2��. �� ���� �ּҰ���� ���ϱ�.
#include <stdio.h>

int min_yaksu(int a, int b, int c); //�Լ� ����

int main(void)
{
	int num1;
	int num2;
	int num3;
	printf("���� �� ���� ����1 ����2 ����3 ���·� �Է��ϼ��� : ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	scanf_s("%d", &num3);
	int result = min_yaksu(num1, num2, num3); //�Լ��� ��ȯ���� �޾��ִ� result����
	if (result == 1) {
		printf("%d,%d,%d�� �ִ� �����: ����", num1, num2, num3);
	}
	else {
		printf("%d,%d,%d�� �ִ� �����: %d", num1, num2, num3, result);
	}
	return 0;
}

int min_yaksu(int a, int b, int c) //�Լ� ����
{
	for (int k = b; ; k--) 
	//Key Point: �� ���� �ִ������� �ּ��� �� �� �ƹ��ų� �ϳ����ٴ� �۰ų� ����.
	{//�� �� �ϳ����� 1�� �������鼭 �� �� ������ �������� ���� �ִ��� ���ǹ����� ã�ƺ���. 
		if (a % k == 0 && b % k == 0 && c % k == 0) {
			if (k == 1) {
				return 1;
			}
			else {
				return k;
			}

		}
	}
}