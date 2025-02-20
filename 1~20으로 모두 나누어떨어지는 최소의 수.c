#include <stdio.h>
int main(void)
{
	for (int i = 20; ;i++) //i에 20,21,22,23....대입
	{ 
		int prime = 1;
		for (int j = 1; j <= 20; j++) //i를 1부터 20까지의 숫자(j)로 나눔
		{
			if (i % j != 0) {   
				prime = 0; //나누어 떨어지지 않으면 prime에 0(False) 할당
				break;  //반복문 탈출. 
			}
		}
		if (prime) { //위의 for문을 모두 통과했다면 조건에 충족. prime=1(Ture)일 것임.
			//통과하지 못했다면 prime은 0일 것임. 
			printf("%d\n", i);
			break; //반복문 탈출
		}
	}
	return 0;
}