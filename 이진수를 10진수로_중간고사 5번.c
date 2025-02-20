//5번. 이진수를 십진수로 변환
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int bin_to_dec(num);

int main(void)
{
	int num; //이진수 입력
	int mult2 = 1; //1,2,4,8,16....이렇게 늘어날 수
	printf("이진수 형태로 0보다 큰 양의 정수 한 개를 입력하세요 : ");
	scanf_s("%d", &num);
	printf("십진수 %d", bin_to_dec(num));
}

int bin_to_dec(num)
{
	int sum = 0; //10진수로 변환한 값이 쌓이는 장소
	int lefted;//10으로 num을 나누 었을 때의 나머지
	int mult2 = 1; //1,2,4,8,16....이렇게 늘어날 수
	//내가 했던 실수 : 변수 선언을 while문 안에 한 것이 실수였다.
	while (1) // 반복문이 진행되면서 sum,lefted,mult2가 값이 갱신되어야 하는데 한번 다시 반복될 때 마다 동일한 값으로 초기화되었다.
	{
		lefted = num % 10;
		num = num / 10;
		sum = sum + lefted * mult2; 
		mult2 = mult2 * 2;//반복문 한바퀴 돌때 마다 2배씩!
		if (num == 0)
		{
			break;
		}
	}
	return sum;
}