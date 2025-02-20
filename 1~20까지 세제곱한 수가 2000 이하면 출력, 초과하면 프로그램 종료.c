#include <stdio.h>
int main(void) //1~20까지 세제곱한 수가 2000 이하면 출력, 초과하면 프로그램 종료
{
	for (int i = 1; i <= 20; i++)
	{
		if (i*i*i <= 2000) {
			printf("%d^3=%d\n", i,i*i*i);
		}
		else if (i*i*i > 2000) {
			printf("2000을 초과하였으므로 프로그램을 종료합니다.\n");
			break;
		}
	}
	return 0;
}