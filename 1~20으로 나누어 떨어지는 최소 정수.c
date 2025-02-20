#include <stdio.h>
//1부터 20까지 모두 나누어 떨어지는 최소 정수.
int main(void)
{
	int i = 20; //20부터 출발. 1~19는 20으로 반드시 나누어떨어지지 않기 때문.
	while (1) //break 없으면 무한 반복
	{
		int prime = 1; //boolean타입 변수처럼 사용. 참,거짓
		for (int j = 1; j <= 20; j++) 
		{
			if (i % j != 0) 
			{
				prime = 0; //나누어 떨어지지 않으면 prime에 0(False) 할당
				break;  //반복문 탈출. 
			}
		}
		if (prime)//위의 for문을 모두 통과했다면 조건에 충족. prime=1(Ture)일 것임.
		{ //for문 중간의 if 조건에 걸렸다면, prime은 0일 것임. 
			printf("%d\n", i);//1부터 20까지 모두 나누어 떨어지는 최소 정수 출력
			break; //반복문 탈출
		}
		i++;	
	}
	return 0;
}