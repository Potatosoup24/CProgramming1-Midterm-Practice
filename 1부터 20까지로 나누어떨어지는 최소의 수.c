#include <stdio.h> //1���� 20������ ����������� �ּ��� ��
int main(void)
{
	int num = 1; //ó�� �� ����
	int devisible = 1;
	while (1) 
	{
		devisible = 1;
		for (int i = 1; i <= 20; i++) //1,2,3,4....,20
		{
			if (num % i != 0) 
			{
				devisible = 0;
				break;
			}
		}
		if (devisible) //devisible�� 0�� �ƴϸ� ���ǹ� ����
		{
			printf("%d", num);
			break;
		}
		num++;
	 }
	return 0;
}