#include <stdio.h>
//�Ҽ� �Ǻ� ����
int sosu(int N); //�Լ� ����
int yaksu_num(int N); //�Լ� ����
void yaksu_print(int N); //�Լ� ����

int main(void)
{
	int num;
	printf("2���� �Է��� �� ���� �Ҽ��� �Ͱ� �ƴ� ���� �Ǵ����ִ� �Լ��Դϴ�.\n");
	printf("���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);
	for (int k=2; k <= num; k++) {
		if (sosu(k)) {
			printf("\t%d�� �Ҽ��Դϴ�.\n",k);
		}
		else {
			printf("%d�� �Ҽ��� �ƴմϴ�.\n", k);
			printf("����� %d�� �Դϴ�.\n", yaksu_num(k));
			yaksu_print(k);
		}
	}
}


int sosu(int N)//�Լ� ����.�Է°��� �Ҽ��̸� 1, �ƴϸ� 0�� ��ȯ�ϴ� �Լ�
{
	if (N == 1) {
		return 0;
	}
	if (N == 2) {
		return 1;
	}
	for (int i = 2; i <= N - 1; i++) {
		if (N % i == 0) {
			return 0; //�Ҽ��� �ƴ� ���� 0 ��ȯ
		}
	}
	return 1; //2���� N-1�� ����� �������� 0�� ������ ����. �Ҽ���. 1��ȯ
}


int yaksu_num(int N) { //�Է��� ���� ����� ������ ��ȯ�ϴ� �Լ�
	int num_of_yaksu=0;
	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			num_of_yaksu++;
		}
	}
	return num_of_yaksu;
}


void yaksu_print(int N) { // �Է��� ���� ����� ����ϴ� �Լ�
	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			printf("%d\t",i);
		}
	}
	printf("\n");
}