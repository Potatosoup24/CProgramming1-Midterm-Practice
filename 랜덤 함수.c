#include <stdio.h>
#include <stdlib.h>
unsigned seed = 17; //번수 선언, 초기화

void setSeed(unsigned s) {
	seed = s;
}
unsigned random()
{
	seed = (seed * seed) + (13 * seed) + 19;
	if (seed > RAND_MAX) {
		seed %= RAND_MAX;
		return seed;
	}
}


int main(void)
{
	setSeed(50);
	for (int i = 0; i < 10; i++) {
		printf("%u", random());
	}
	
	
	return 0;
}