#include <stdio.h>
#define _NO_SECURE_WARNINGS
int main(void)
{
	int num1, num2;
	int result;
	int left;
	char ch;
	
	printf("num1�� �Է��Ͻÿ� : ");
	scanf_s("%d", &num1);
	printf("num2�� �Է��Ͻÿ� : ");
	scanf_s("%d", &num2);
	printf("�����ڸ� �Է��Ͻÿ�:"); 
	scanf_s("%c", &ch); //%c�� �ٹٲ� ���ڱ��� �Է°����� ����. \n�� �Էµ�.
	scanf_s("%c", &ch); //���� ������ �װ� �Է°����� �޴´�.%d�� �ٹٲ��� �Է����� �������� �ʴ´�.
	//���ϴ� ���� �������� ���ڸ� �Է¹޴� scanf�� �ι� ���ų� ���� ���� ��� �Ѵ�.
	switch (ch)
	{
	case '+':
		result = num1 + num2;
		printf("%d+%d=%d",num1,num2,result);
		break;
	case '-':
		result = num1 - num2;
		printf("%d-%d=%d", num1, num2, result);
		break;
	case '*':
		result = num1 * num2;
		printf("%d*%d=%d", num1, num2, result);
		break;
	case '/':
		if (num2 != 0) {
			result = num1 / num2;
			left = num1 % num2;
			printf("%d/%d=%d.....%d", num1, num2, result,left);
		}
		else {
			printf("num2�� 0�� �� �� �����ϴ�");
		}
		break;
	case '%':
		if (num2 != 0) {
			left = num1 % num2;
			printf("%d %% %d=%d", num1, num2, left);
		}
		else {
			printf("num2�� 0�� �� �� �����ϴ�");
		}
		break;
	default:
		printf("�߸��� �����ڸ� �Է��Ͽ����ϴ�.");
	}
	return 0;
}