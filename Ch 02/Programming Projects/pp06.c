// calculates a polynomial

#include <stdio.h>

int main(void)
{
	float x, answer;

	printf("Enter a value: ");
	scanf("%f", &x);

	answer = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;

	printf("Answer = %.2f", answer);

	return 0;
}
