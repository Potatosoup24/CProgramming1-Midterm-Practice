#include <stdio.h>
void deviding_min_func(int N);

int main(void)
{
	int n;
	printf("1���� �Է��� �� ���� ���������� ���� ���� ������ �˷��帲 : ");
	scanf_s("%d", &n);
	deviding_min_func(n);
	return 0;
}

void deviding_min_func(int N) //1~N������ ��� ������ ���������� ���� ���� ����.
{
	for (int j = 1;; j++)
	{
		int prime = 1;//������ �������� ���� �� 0(false)�� ��
		for (int i = 1; i <= N; i++)
		{
			if (j % i != 0) {
				prime = 0; //������ �������� �ʴ� ���
				break;
			}
		}
		if (prime) { //���� �ݺ������� prime�� 0���� ������ �ʾҴٸ� ���� ��ȯ�Ѵ�.
			printf("%d", j);
			break;
		}
	}
}