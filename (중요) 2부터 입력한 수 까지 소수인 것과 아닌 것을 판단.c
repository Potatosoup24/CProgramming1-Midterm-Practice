#include <stdio.h>
//소수 판별 계산기
int sosu(int N); //함수 선언
int yaksu_num(int N); //함수 선언
void yaksu_print(int N); //함수 선언

int main(void)
{
	int num;
	printf("2부터 입력한 수 까지 소수인 것과 아닌 것을 판단해주는 함수입니다.\n");
	printf("양의 정수를 입력하시오 : ");
	scanf_s("%d", &num);
	for (int k=2; k <= num; k++) {
		if (sosu(k)) {
			printf("\t%d는 소수입니다.\n",k);
		}
		else {
			printf("%d는 소수가 아닙니다.\n", k);
			printf("약수는 %d개 입니다.\n", yaksu_num(k));
			yaksu_print(k);
		}
	}
}


int sosu(int N)//함수 정의.입력값이 소수이면 1, 아니면 0을 반환하는 함수
{
	if (N == 1) {
		return 0;
	}
	if (N == 2) {
		return 1;
	}
	for (int i = 2; i <= N - 1; i++) {
		if (N % i == 0) {
			return 0; //소수가 아닐 때는 0 반환
		}
	}
	return 1; //2부터 N-1로 나누어서 나머지가 0이 나오지 않음. 소수임. 1반환
}


int yaksu_num(int N) { //입력한 값의 약수의 갯수를 반환하는 함수
	int num_of_yaksu=0;
	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			num_of_yaksu++;
		}
	}
	return num_of_yaksu;
}


void yaksu_print(int N) { // 입력한 값의 약수를 출력하는 함수
	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			printf("%d\t",i);
		}
	}
	printf("\n");
}