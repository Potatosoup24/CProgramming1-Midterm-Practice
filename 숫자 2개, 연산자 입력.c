#include <stdio.h>
#define _NO_SECURE_WARNINGS
int main(void)
{
	int num1, num2;
	int result;
	int left;
	char ch;
	
	printf("num1을 입력하시오 : ");
	scanf_s("%d", &num1);
	printf("num2을 입력하시오 : ");
	scanf_s("%d", &num2);
	printf("연산자를 입력하시오:"); 
	scanf_s("%c", &ch); //%c는 줄바꿈 문자까지 입력값으로 간주. \n이 입력됨.
	scanf_s("%c", &ch); //엔터 누르면 그걸 입력값으로 받는다.%d는 줄바꿈은 입력으로 간주하지 않는다.
	//원하는 값이 나오려면 문자를 입력받는 scanf를 두번 쓰거나 가장 먼저 써야 한다.
	switch (ch)
	{
	case '+':
		result = num1 + num2;
		printf("%d+%d=%d",num1,num2,result);
		break;
	case '-':
		result = num1 - num2;
		printf("%d-%d=%d", num1, num2, result);
		break;
	case '*':
		result = num1 * num2;
		printf("%d*%d=%d", num1, num2, result);
		break;
	case '/':
		if (num2 != 0) {
			result = num1 / num2;
			left = num1 % num2;
			printf("%d/%d=%d.....%d", num1, num2, result,left);
		}
		else {
			printf("num2는 0이 될 수 없습니다");
		}
		break;
	case '%':
		if (num2 != 0) {
			left = num1 % num2;
			printf("%d %% %d=%d", num1, num2, left);
		}
		else {
			printf("num2는 0이 될 수 없습니다");
		}
		break;
	default:
		printf("잘못된 연산자를 입력하였습니다.");
	}
	return 0;
}