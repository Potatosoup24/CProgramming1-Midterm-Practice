#include <stdio.h>
int isPrimeNumber(int K);//�Ҽ����� �Ǵ����ִ� �Լ� ����
int num_of_yaksu(int K); //����� ������ �˷��ִ� �Լ� ����
int main(void)
{
	for (int i = 2; i <= 99; i++)//2���� 99������ ������ �Ҽ����� �ƴ��� ���� �Ǵ�
	{
		if (i == 2) {
			printf("2�� �Ҽ��Դϴ�.\n");
			continue;
		}
		if (isPrimeNumber(i)) { //�Լ� ȣ��
			printf("%d�� �Ҽ��Դϴ�.\n",i);
		}
		else {
		 num_of_yaksu(i);
		}
	}
	return 0;
}
//�Լ� ���ǵ�
int isPrimeNumber(int K)
{
	for (int j = 2; j <= K - 1; j++)
	{
	if (K % j == 0)
		{
			return 0; //�Ҽ��� �ƴϸ� 0 ��ȯ
		}
	}
	//���� for���� ����ϴµ��� �������� ����->�Ҽ��̴�.
	return 1; //�Ҽ��̸� 1 ��ȯ
}


int num_of_yaksu(int K) {
	int num = 0;
	for (int i = 1; i <= K; i++) {
		if (K % i == 0) {
			num++;
		}
	}
	printf("%d�� ����� ���� : %d\n", K, num);
	return num; //����� �� ��ȯ
}

