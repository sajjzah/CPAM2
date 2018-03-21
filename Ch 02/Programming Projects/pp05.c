// calculates a polynomial

#include <stdio.h>

int main(void)
{
	float x, answer;

	printf("Enter a value: ");
	scanf("%f", &x);

	answer = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;

	printf("Answer = %.2f", answer);

	return 0;
}
