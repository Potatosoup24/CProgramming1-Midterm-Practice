#include <stdio.h>
int isPrimeNumber(int K);//소수인지 판단해주는 함수 선언
int num_of_yaksu(int K); //약수의 개수를 알려주는 함수 선언
int main(void)
{
	for (int i = 2; i <= 99; i++)//2부터 99까지의 수들이 소수인지 아닌지 여부 판단
	{
		if (i == 2) {
			printf("2는 소수입니다.\n");
			continue;
		}
		if (isPrimeNumber(i)) { //함수 호출
			printf("%d는 소수입니다.\n",i);
		}
		else {
		 num_of_yaksu(i);
		}
	}
	return 0;
}
//함수 정의들
int isPrimeNumber(int K)
{
	for (int j = 2; j <= K - 1; j++)
	{
	if (K % j == 0)
		{
			return 0; //소수가 아니면 0 반환
		}
	}
	//위의 for문을 통과하는동안 리턴하지 않음->소수이다.
	return 1; //소수이면 1 반환
}


int num_of_yaksu(int K) {
	int num = 0;
	for (int i = 1; i <= K; i++) {
		if (K % i == 0) {
			num++;
		}
	}
	printf("%d의 약수의 개수 : %d\n", K, num);
	return num; //약수의 수 반환
}

