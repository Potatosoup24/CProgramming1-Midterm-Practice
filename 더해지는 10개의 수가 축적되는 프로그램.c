#include <stdio.h>
int main(void)
{
	int counting = 0; //�� �� ���ߴ��� 
	int first_num = 0; //ó�� ����
	int num; //�Է��� ���� ����
	while (counting<=10)
	{
		printf("���� ���ڸ� �Է��Ͻÿ� : ");
		scanf_s("%d", &num);
		first_num = first_num + num;
		printf("%d\n", first_num);
		counting++;
	}
	return 0;
}