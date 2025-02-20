#include <stdio.h> //1부터 20까지로 나누어떨어지는 최소의 수
int main(void)
{
	int num = 1; //처음 수 설정
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
		if (devisible) //devisible이 0이 아니면 조건문 실행
		{
			printf("%d", num);
			break;
		}
		num++;
	 }
	return 0;
}