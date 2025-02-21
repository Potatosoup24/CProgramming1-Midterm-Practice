#include <stdio.h>
int main(void)
{
	for (int i = 4; i >= 0; i--) {
		for (int j = 0; j <= i; j++) {
			printf("S");
		}
		for (int k = 3; k >= i; k--) {
			printf("*");
		}
		printf("\n");
	}
}