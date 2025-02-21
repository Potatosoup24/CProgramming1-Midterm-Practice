#include <stdio.h>
int main(void) {
	float num = 4.0;
	float i = 3;
	float a = 5;
	while (i<=10000000,a<=10000000)
	{
		num = num -(4 / i) + (4 / a);
		i = i + 4;
		a = a + 4;
	}
	printf("원주율값은 %.10f이다.", num);
	return 0;
}