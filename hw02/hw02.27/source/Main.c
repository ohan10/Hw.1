#include<stdio.h>
#include<stdlib.h>


int	main(void)
{
	int i, j;
	for (i = 1; i <= 9;i=i+2) {
		for (j = 1; j <= 9; j = j + 1)
		{
			if (j <= (9 - i) / 2) {
				printf(" ");
				
			}
			if (j>(9-i)/2 && j<10-(9-i)/2) {
				printf("*");
			}
			
		}printf("\n");
	}
}