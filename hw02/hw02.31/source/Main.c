#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	printf("number  square  cube\n");
	for (int i = 0; i <= 10; i++) {
		printf("%d\t%d\t%d\n", i, (int)pow(i, 2), (int)pow(i, 3));
	}
	system("pause");
	return 0;
}