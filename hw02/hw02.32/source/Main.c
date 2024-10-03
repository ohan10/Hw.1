#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float hight, weight, BMI;

int main(void) {

	printf("This is a BMI calculator.\n");
	printf("Please enter you're height(m):");
	scanf_s("%f", &hight);
	printf("\nPlease enter you're weight(kg):");
	scanf_s("%f", &weight);

	BMI = weight / pow(hight, 2);
	printf("Your BMI is %.1f\n", BMI);

	if (BMI < 18.5) {
		printf("You are underweight.(less than 18.5)\n");
	}
	else if (BMI >= 18.5 && BMI <= 24.9) {
		printf("You are nomral.(between 18.5 and 24.9)\n");
	}
	else if (BMI >= 25.0 && BMI <= 29.9) {
		printf("You are overweight.(between 25 and 29.9)\n");
	}
	else {
		printf("You are obese.(30 or greater\n)");
	}
	system("pause");
	return 0;
}