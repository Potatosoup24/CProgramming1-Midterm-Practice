#include <stdio.h>
int main(void) //1~20���� �������� ���� 2000 ���ϸ� ���, �ʰ��ϸ� ���α׷� ����
{
	for (int i = 1; i <= 20; i++)
	{
		if (i*i*i <= 2000) {
			printf("%d^3=%d\n", i,i*i*i);
		}
		else if (i*i*i > 2000) {
			printf("2000�� �ʰ��Ͽ����Ƿ� ���α׷��� �����մϴ�.\n");
			break;
		}
	}
	return 0;
}