#include <stdio.h>
int main(void)
{
	for (int i = 20; ;i++) //i�� 20,21,22,23....����
	{ 
		int prime = 1;
		for (int j = 1; j <= 20; j++) //i�� 1���� 20������ ����(j)�� ����
		{
			if (i % j != 0) {   
				prime = 0; //������ �������� ������ prime�� 0(False) �Ҵ�
				break;  //�ݺ��� Ż��. 
			}
		}
		if (prime) { //���� for���� ��� ����ߴٸ� ���ǿ� ����. prime=1(Ture)�� ����.
			//������� ���ߴٸ� prime�� 0�� ����. 
			printf("%d\n", i);
			break; //�ݺ��� Ż��
		}
	}
	return 0;
}