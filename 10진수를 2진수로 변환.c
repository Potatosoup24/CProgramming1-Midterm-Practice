#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���ν����� 10������ 2������ ��ȯ�ϴ� ������ �ڵ�� �Ű�ٰ� �����ϸ� ���ϴ�.
int main(void)
{
	int num;//�Է� �� 10���� �Է�
	int left;//������ ��
	int bin_num=0;//2������ ��ȯ�� ����� 
	int i = 1;  //1,10,100....�̷��� �þ ��
	printf("10������ �Է��ϸ� 2������ ��ȯ�ϰڽ��ϴ�. �Է� : ");
	scanf("%d", &num);
	while(1) {
		left = num % 2; //11��° �ٰ� 12��° �� ������ ��ġ�� �ٲ�� �ȵ�. 
		num = num / 2; //num���� ó������ �ٲ� ���ϴ� �� �� ����

		//���� 2������ �Ѱ� �ƴϰ�, 10������ 2����ó�� ���̰� �Ϸ��� �������� ���.
		bin_num =bin_num + (left * i);
		i = i * 10;

		if (num == 1) {
			bin_num = bin_num + (num * i);
			printf("%d", bin_num);
			break;
		}

	}
}