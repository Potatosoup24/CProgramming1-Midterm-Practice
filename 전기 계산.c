#include <stdio.h>

void Ampere_check(int K); //�Լ�����

int main(void)
{
	int ampere;
	double length;
	printf("�䱸 ���������Է��Ͻÿ� (3,6,9,12,15 �� �ϳ���) : ");
	scanf_s("%d", &ampere);
	printf("���� �ڵ��� ���̸� �Է��Ͻÿ� : ");
	scanf_s("%lf", &length);

	if (ampere == 3 || ampere == 6 || ampere == 9 || ampere == 12) {
		if (length < 5) { //�ּ����� �����ڵ�
			ampere += 3;
			Ampere_check(ampere);//�Լ� ȣ��
		}
		else if (length >= 5 && length < 10) { //�Ѵܰ� �� ū �����ڵ�
			ampere += 6;
			Ampere_check(ampere);
		}
		else if (length >= 10 && length < 15) { //�� �ܰ� �� ū �����ڵ�
			ampere += 9;
			Ampere_check(ampere);
		}
		else {
			printf("���� �ڵ��� ���̰� 15m �̻��Դϴ�. ����� �Ұ��մϴ�.\n");
		}
	}
	else {
		printf("�䱸 �������� 3,6,9,12,15 �� �ϳ��� �����մϴ�. �ٽ� �Է����ּ���.");
	}
	return 0;
}

void Ampere_check(int K) { //�Լ� ����. ��ȯ�� ����.
	if (K > 15) {
		printf(" ��� �������� ����. ��� �Ұ�.\n");
	}
	else {
		printf("%dA�� ���� �ڵ尡 ��� �����մϴ�. \n", K);
	}
}

