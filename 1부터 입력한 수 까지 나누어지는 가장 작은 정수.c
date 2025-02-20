#include <stdio.h>
void deviding_min_func(int N);

int main(void)
{
	int n;
	printf("1부터 입력한 수 까지 나누어지는 가장 작은 정수를 알려드림 : ");
	scanf_s("%d", &n);
	deviding_min_func(n);
	return 0;
}

void deviding_min_func(int N) //1~N까지의 모든 정수로 나누어지는 가장 작은 정수.
{
	for (int j = 1;; j++)
	{
		int prime = 1;//나누어 떨어지지 않을 때 0(false)이 됨
		for (int i = 1; i <= N; i++)
		{
			if (j % i != 0) {
				prime = 0; //나누어 떨어지지 않는 경우
				break;
			}
		}
		if (prime) { //위의 반복문에서 prime이 0으로 변하지 않았다면 값을 반환한다.
			printf("%d", j);
			break;
		}
	}
}