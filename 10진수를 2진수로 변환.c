#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//세로식으로 10진수를 2진수로 변환하는 과정을 코드로 옮겼다고 생각하면 편하다.
int main(void)
{
	int num;//입력 값 10진수 입력
	int left;//나머지 값
	int bin_num=0;//2진수로 변환될 결과값 
	int i = 1;  //1,10,100....이렇게 늘어날 값
	printf("10진수를 입력하면 2진수로 변환하겠습니다. 입력 : ");
	scanf("%d", &num);
	while(1) {
		left = num % 2; //11번째 줄과 12번째 줄 내용의 위치가 바뀌면 안됨. 
		num = num / 2; //num값이 처음부터 바뀌어서 원하는 값 안 나옴

		//실제 2진수로 한건 아니고, 10진수를 2진수처럼 보이게 하려고 눈속임을 썼다.
		bin_num =bin_num + (left * i);
		i = i * 10;

		if (num == 1) {
			bin_num = bin_num + (num * i);
			printf("%d", bin_num);
			break;
		}

	}
}