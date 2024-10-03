#include<stdio.h>
#include<stdlib.h>


int	main(void)
{
	int a, b, c;
	printf("write an integers\n");
	scanf("%d", &a);
	if (a % 2 == 0) {
		printf("%d is even", a);
	}
	else {
		printf("%d is odd", a);
	}
}