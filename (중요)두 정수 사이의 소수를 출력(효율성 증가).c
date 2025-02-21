//두 정수 사이의 소수 출력하기!!
// 소수 판별 함수 효율성 개선
//두 정수 사이의 소수를 배열에 넣어주는 함수 만들기!!
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int isPrimeNumber(int m);//소수이면 1, 아니면 0을 리턴하는 함수

int PrimeNumbersToArr(int n1, int n2, int* primeArr);

int main(void)
{
	int n1;
	int n2;
	int PRIMEARR[500];//n1~n2의 소수가 저장될 배열. 공간은 적당히 넉넉하게 마련
	int Prime_Count;
	printf("두 정수 사이의 소수를 출력하겠습니다.\n");
	printf("첫 정수 입력:");
	scanf("%d", &n1);
	printf("두번째 정수 입력:");
	scanf("%d", &n2);

	Prime_Count = PrimeNumbersToArr(n1, n2, PRIMEARR);//함수호출
	//이 과정을 통하여 n1부터 n2사이의 소수가 PRIMEARR에 담긴다.
	//함수의 리턴값인 소수의 갯수는 main()의 로컬변수인 Prime_Count가 받아준다
	printf("%d와 %d사이의 소수의 갯수는 %d개\n", n1, n2, Prime_Count);
	for (int i = 0; i < Prime_Count; i++) {
		printf("%d ", PRIMEARR[i]);
	}
	return 0;
}

//파라미터가 소수이면 1, 아니면 0을 리턴하는 함수
int isPrimeNumber(int m)
{
	if (m < 2) return 0; // 2보다 작은 경우 소수가 아님
	if (m == 2) return 1; // 2는 소수
	if (m % 2 == 0) return 0; // 2가 아닌짝수는 소수가 아님

	//짝수로 나누어 떨어지는 것들은 2로도 반드시 나누어 떨어짐->홀수만 고려해도 됨!!
	for (int i = 3; i * i <= m; i += 2) {
		/*
		왜 i*i <= m 로  할까?

		여기서 중요한 개념: 약수의 대칭성
		ex) 36: (1 36)(2 18)(3 12)(4 9)(6 @대칭@ 6)(9 4)(12 3)(18 2)(36 1)
		36의 약수는 (6 6)을 대칭으로 나뉨.
		36은 2로 나누어 떨어짐,36은 18로 나누어 떨어짐->이 두가지 명재는 논리적으로 동치이다.
		2로 나누어 떨어진다는 것을 알면 18로 나누어 떨어진다는 사실을 고려하는 것은 시간낭비!!

		36이 소수인지의 여부를 고려할 때 1~루트36 여기까지만 검토하면 됨!!

		이 방식이 얼마나 효율적인지 ex)41    루트41은 6.XX
		i<=m-1일 때:3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39 총 19회
		i*i<=m일 때:3,5 총 2회
		엄청나게 더 효율적인 코드가 된다. 연산 횟수가 거의 1/10이 된다.

		응용: 28이 소수인지의 여부를 고려할 때 1~루트28. 즉 1~5.XX 까지만 검토
		*/
		if (m % i == 0) { //소수가 아님
			return 0;  //소수가 아닐 때는 0을 반환
		}
	}
	return 1; //소수일 때는 1을 반환
}



int PrimeNumbersToArr(int n1, int n2, int* primeArr) //효율성을 위하여 짝수들은 소수에서 뺌.
{  //n1부터 n2까지 소수들을 파라미터로 받은 int* 타입 변수에 넣어주는 함수.
	//소수들의 갯수를 반환해준다. 

	int NumOfPrimes = 0;//소수들의 갯수. 일단 0개에서 시작
	int start = n1;
	int end = n2;

	//예외상황 처리1
	if (n1 > n2 || n2 < 0) return 0;//소수가 절대 성립할 수 없는 경우
	else if (n1 < 0) start = 2;//소수는 자연수부터 고려하기에 이 경우는 2부터 카운트
	//예외상황 처리2
	if (n1 == 1) {//n1이 1이라면
		*(primeArr + NumOfPrimes) = 2;//2를 소수 배열에 추가해주고,
		start = 3;//3부터 고려!!
		NumOfPrimes++;//소수의 갯수 하나 추가
	}
	if (n1 == 2) {//n1이 2라면
		primeArr[NumOfPrimes++] = 2;//2를 소수 배열에 추가해주고
		//소수의 갯수 하나 추가
		start = 3;
	}


	if (start > 2) {
		if (start % 2 == 0) { //n1이 짝수이면 1을 더해서 홀수로 만들어버림
			start++; //8이라면 9로 만들고
		}
		for (int i = start; i <= end; i += 2) { //9,11,13,15,17...n2이런 식으로 홀수만 고려하게 함.
			if (isPrimeNumber(i)) {//소수이면
				primeArr[NumOfPrimes++] = i;//소수 배열에 넣어주고
				//소수의 갯수 하나 추가
			}
		}
	}
	return NumOfPrimes;//소수의 갯수를 리턴
}