//4번. 친화수 구하기
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int yaksu_sum(int N); //4번 문제입니다
//친화수를 찾는 프로그램을 구현한다. 친화수란 자신을 제외한 약수의 합의 약수의 합이 자기 자신이 되는 것이다. 
int main(void) //ex) 220의 약수 1,2,4,5,10,11,20,22,44,55,110임. 약수의 합 284. 284의 약수(1,2,4,71,142)의 합 220
{              //여기서 약수의 합은 자기 자신은 포함하지 않음.
	int num1;
	int num2;
	printf("정수 범위 num1~num2 형태로 입력하시오 num1<num2이어야 합니다 : ");
	scanf_s("%d~%d", &num1, &num2);//"num1~num2"형태로 대입.
	if (num1 >= num2 || num1 < 0 || num2 <= 0)
	{
		printf("잘못된 값을 입력하였습니다. 다시 입력하세요.");
	}
	else {
		for (int i = num1; i <= num2; i++) //i에 num1~num2가 할당된다
		{
			int k = yaksu_sum(yaksu_sum(i)); //약수의 합의 약수의 합. 변수 k
			if (i == k && k >= num1 && k <= num2) { //어느 수의 약수의 합의 약수의 합이 자기 자신과 같다면
				if (i != yaksu_sum(i)) {
					printf("%d과 %d은 친화수\n", i, yaksu_sum(i));
				}
				else { //이 경우를 안 고려하면 6과 6은 친화수입니다. 28과 28은 친화수입니다. 같은 원치 않는 출력값이 나온다.
					printf("%d 완전수\n", i);//완전수가 되는 경우도 고려해야 한다.
				}
			}
		}
	}
	return 0;
}



int yaksu_sum(int N) { //자신을 제외한약수들의 합을 반환하는 함수 정의
	int sum = 0; //약수들의 합을 받아주는 변수
	for (int i = 1; i <= N; i++) //1부터 N-1까지 ex) 20이라면 1~20
	{
		if (N % i == 0) { //약수이면
			sum = sum + i; //sum에 더해준다
		}
	}
	return sum - N; //자신을 제외한 약수의 합을 반환한다.
}