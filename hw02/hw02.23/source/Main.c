#include<stdio.h>
#include<stdlib.h>


int	main(void)
{
	int n1, n2, n3,x;
	printf("write three integers(separate with  space)");
	scanf("%d%d%d", &n1, &n2, &n3);
	if (n1 > n2) {
		x = n1;
		n1 = n2;
		n2 = x;
	}
	if (n2 > n3) {
		x = n2;
		n2 = n3;
		n3 = x;
	}
	if (n1 > n3) {
		x = n3;
		n3 = n1;
		n1 = x;
	}
	if (n1 == n2 && n2==n3) {
		printf("Each integers is equal to others\n");
	}
	printf("The smallest integers is %d\n", n1);
	printf("The largest integers is %d\n", n3);
	system("pause");
	return 0;
}