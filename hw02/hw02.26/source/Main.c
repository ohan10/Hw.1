#include<stdio.h>
#include<stdlib.h>


int	main(void)
{
	int a, b, c;
	printf("write two integers\n");
	scanf("%d%d", &a, &b);
	if (a % b == 0) {
		printf("%d is a mutiple of %d", a,b);
	}
	else {
		printf("%d is not a mutiple of %d", a, b);
	}
}