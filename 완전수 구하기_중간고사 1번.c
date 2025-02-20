//1번. 완전수는 자기 자신을 제외한 양의 약수의 합이 자기 자신이 되는 양의 정수이다.
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int yaksu_sum(int N); //함수 선언

int main(void)
{
	int num;
	printf("1부터 num까지의 완전수를 확인합니다. num을 입력하세요 : ");//완전수는 자신을 뺀 모든 약수들의 합이 자신과 같은 수
	scanf_s("%d", &num);
	for (int i = 1; i <= num; i++) {  //1부터 num까지의 반복문
		if (i == yaksu_sum(i)) { //자기 자신은 약수의 합에서 제외해야 함
			printf("완전수 %d\n", i);
		}
	}
	return 0;
}


int yaksu_sum(int N) { //N의 약수들의 합을 반환하는 함수 정의
	int sum = 0; //약수들의 합을 받아주는 변수
	for (int i = 1; i <= N; i++) //1부터 N까지
	{
		if (N % i == 0) { //약수이면
			sum = sum + i; //sum에 더해준다
		}
	}
	return sum-N;  //sum-N. 약수의 합에서 자기 자신을 뺀 값을 반환해준다. 
}