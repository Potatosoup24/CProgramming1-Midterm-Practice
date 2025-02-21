#include <stdio.h>

void Ampere_check(int K); //함수선언

int main(void)
{
	int ampere;
	double length;
	printf("요구 전류량을입력하시오 (3,6,9,12,15 중 하나로) : ");
	scanf_s("%d", &ampere);
	printf("전원 코드의 길이를 입력하시오 : ");
	scanf_s("%lf", &length);

	if (ampere == 3 || ampere == 6 || ampere == 9 || ampere == 12) {
		if (length < 5) { //최소한의 전원코드
			ampere += 3;
			Ampere_check(ampere);//함수 호출
		}
		else if (length >= 5 && length < 10) { //한단계 더 큰 전원코드
			ampere += 6;
			Ampere_check(ampere);
		}
		else if (length >= 10 && length < 15) { //두 단계 더 큰 전원코드
			ampere += 9;
			Ampere_check(ampere);
		}
		else {
			printf("전원 코드의 길이가 15m 이상입니다. 사용이 불가합니다.\n");
		}
	}
	else {
		printf("요구 전류량은 3,6,9,12,15 중 하나만 가능합니다. 다시 입력해주세요.");
	}
	return 0;
}

void Ampere_check(int K) { //함수 정의. 반환값 없음.
	if (K > 15) {
		printf(" 허용 전류량을 넘음. 사용 불가.\n");
	}
	else {
		printf("%dA의 전원 코드가 사용 가능합니다. \n", K);
	}
}

