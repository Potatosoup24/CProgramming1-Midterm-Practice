#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char GRADE;
	int pay_money;
	int parking_time;

	printf("주차요금 계산 프로그램입니다.\n");
	printf("회원 등급을 입력해주십시오(P,G,S,F,N 중 하나) : ");
	scanf(" %c", &GRADE);
	printf("\n");
	printf("지불한 돈을 입력하시오(숫자만) : ");
	scanf(" %d", &pay_money);
	printf("\n");
	printf("주차 시간을 입력해주세요(분 단위로) : ");
	scanf("%d", &parking_time);
	printf("\n");

	if (GRADE == 'P' || GRADE == 'G') 
	{
		printf("2시간 주차 무료입니다");
		if (parking_time >= 120) 
		{
			printf("%d분 만큼의 요금만 지불하면 됩니다.\n", parking_time - 120);
			printf("%d원의 추가 요금을 지불해주십시오.\n", ((parking_time - 120) - (parking_time % 10))*100);
		}
		else 
		{
			printf("2시간을 초과하지 않았으므로 돈을 더이상 지불하실 필요가 없습니다.");
		}
	}
	else if (GRADE == 'S' || GRADE == 'F') 
	{
		if (pay_money >= 30000 && ) 
		{
			printf("2시간 주차가 무료입니다.\n");
			printf("%d분 만큼의 요금만 지불하면 됩니다.\n",parking_time-120);
			printf("%d원의 추가 요금을 지불해주십시오.\n", ((parking_time - 120) - (parking_time % 10)) * 100);

		}
		else if (pay_money >= 10000) 
		{
			printf("1시간 주차가 무료입니다.\n");
			printf("%d분 만큼의 요금만 지불하면 됩니다.\n", parking_time - 60);
			printf("%d원의 요금을 지불해주십시오.\n", ((parking_time - 60) - (parking_time % 10)) * 100);
		}
		else 
		{
			printf("무료 주차 혜택이 없습니다.");
			printf("%d분 만큼의 요금을 지불해 주십시오.\n", parking_time);
			printf("%d원의 요금을 지불해주십시오.\n", ((parking_time) - (parking_time % 10)) * 100);
		}
	}
	else if (GRADE =='N')
	{
		if (pay_money >= 50000 && parking_time > 120)
		{
			printf("2시간 주차가 무료입니다.\n");
			printf("%d분 만큼의 요금만 지불하면 됩니다.\n", parking_time - 120);
			printf("%d원의 요금을 지불해주십시오.\n", ((parking_time - 120) - (parking_time % 10)) * 100);
		else if (pay_money >= 50000 && parking_time <= 120)
		{
			printf("2시간 주차가 무료입니다.\n");
			printf("추가 요금을 지불하실 필요가 없습니다.");
		}
		else if (pay_money >= 30000 && parking_time > 60)
		{
			printf("1시간 주차가 무료입니다.\n");
			printf("%d분 만큼의 요금만 지불하면 됩니다.\n", parking_time - 60);
			printf("%d원의 요금을 지불해주십시오.\n", ((parking_time - 60) - (parking_time % 10)) * 100);
		else if (pay_money >= 30000 && parking_time <= 60)
		{
			printf("1시간 주차가 무료입니다.\n");
			printf("추가 요금을 지불하실 필요가 없습니다.");
		}
		else
		{
			printf("%d분 만큼의 요금만 지불하면 됩니다.\n", parking_time);
			printf("%d원 지불해주세요.\n", (parking_time - (parking_time % 10)) * 100);
		}
		}
		else
		{
			printf("잘못된 등급을 입력하였습니다. 다시 시도해주세요");
		}
		return 0;
}