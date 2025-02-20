//3번. 공약수의 갯수, 공약수 출력 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //3번 문항 1을 제외한 공약수의 수를 알려주는 프로그램. 공약수도 출력

int num_of_gongyaksu(int num1, int num2, int num3, int* gongyaksu_array);//함수 선언

int main(void)
{
	int num1;
	int num2;
	int num3;
	int gongyaksu_Array[100];
	printf("정수 세 개를 정수1-정수2-정수3 형태로 입력하세요:");
	scanf("%d-%d-%d", &num1, &num2, &num3);//num1-num2-num3 의 형태로 입력해야 함.

	int result = num_of_gongyaksu(num1, num2, num3, gongyaksu_Array);//공약수의 갯수 결과
	printf("\n공약수의 개수 : %d\n", result);

	printf("공약수: ");
	for (int i = 0; i < result; i++) {
		printf("%d ", gongyaksu_Array[i]);
	}
}

//포인터를 이용하면 로컬 변수의 한계를 극복할 수 있다.

int num_of_gongyaksu(int num1, int num2, int num3, int* gongyaksu_array)//공약수의 개수를 반환하는 함수.
//공약수는 파라미터로 받은 int* 변수에 넣는다. 
{
	int nums_gongyaksu = 0;//공약수의 수. 공약수가 1개 나올 때마다 1씩 커짐
	//셋중 하나의 공약수는 셋중 하나 아무거나보다 절대 커질 수 없다. 2~셋중하나 로 나누어 떨어지는지 비교하면 공약수 여부를 판단 가능하다.
	for (int K = 2; K <= num1; K++) {//2에서부터 차차 커질 것임. 1을 제외한 공약수를 찾을 것이기 때문.
		if (num1 % K == 0 && num2 % K == 0 && num3 % K == 0)//셋다 나누어 떨어지는 공약수가 있다면..
		{

			*(gongyaksu_array+nums_gongyaksu) = K;//공약수를 int타입 배열에 넣어준다.
			nums_gongyaksu++; //공약수를 하나 발견하면 1씩 공약수의 갯수에 더해줌

		}
	}
	return nums_gongyaksu;
}