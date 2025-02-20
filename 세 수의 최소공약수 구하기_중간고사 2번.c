//2번. 세 수의 최소공약수 구하기.
#include <stdio.h>

int min_yaksu(int a, int b, int c); //함수 선언

int main(void)
{
	int num1;
	int num2;
	int num3;
	printf("정수 세 개를 정수1 정수2 정수3 형태로 입력하세요 : ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	scanf_s("%d", &num3);
	int result = min_yaksu(num1, num2, num3); //함수의 반환값을 받아주는 result변수
	if (result == 1) {
		printf("%d,%d,%d의 최대 공약수: 없음", num1, num2, num3);
	}
	else {
		printf("%d,%d,%d의 최대 공약수: %d", num1, num2, num3, result);
	}
	return 0;
}

int min_yaksu(int a, int b, int c) //함수 정의
{
	for (int k = b; ; k--) 
	//Key Point: 세 수의 최대공약수는 최소한 셋 중 아무거나 하나보다는 작거나 같다.
	{//셋 중 하나에서 1씩 빼나가면서 셋 다 나누어 떨어지는 것이 있는지 조건문으로 찾아본다. 
		if (a % k == 0 && b % k == 0 && c % k == 0) {
			if (k == 1) {
				return 1;
			}
			else {
				return k;
			}

		}
	}
}