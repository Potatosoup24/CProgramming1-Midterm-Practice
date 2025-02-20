#include <stdio.h>
int main(void)
{
	int counting = 0; //몇 번 더했는지 
	int first_num = 0; //처음 변수
	int num; //입력할 숫자 변수
	while (counting<=10)
	{
		printf("더할 숫자를 입력하시오 : ");
		scanf_s("%d", &num);
		first_num = first_num + num;
		printf("%d\n", first_num);
		counting++;
	}
	return 0;
}