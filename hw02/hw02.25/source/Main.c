#include<stdio.h>
#include<stdlib.h>


int	main(void)
{
	int i, j;
	for (j = 0; j < 6; j++) {
		for (i = 0; i < 6; i++) {
			if (i % 5 == 0) {
				printf("Z");
			}
			else if (i == j) {
				printf("Z");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n\n");
	for (j = 0; j < 5; j++) {
		for (i = 0; i < 7; i++) {
			if (i == 6)
				printf("J");
			else if (i == 0 && j == 1)
				printf("J");
			else if (i == 1 && j == 0)
				printf("J");
			else if (j == 2 && i != 0) {
				if (i != 6)
					printf("J");
			}
			else
				printf(" ");

		}
		printf("\n");
	}
}