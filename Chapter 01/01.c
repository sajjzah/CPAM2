#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4, num5, num6, num7, num8,
		num9, num10, num11, num12, firstSum, secondSum, total;

	printf("Enter the first 12 digits of an EAN: ");
	scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &num1, &num2, &num3,
		&num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12);

	firstSum = num2 + num4 + num6 + num8 + num10 + num12;
	secondSum = num1 + num3 + num5 + num7 + num9, num11;
	total = (3 * firstSum) + secondSum;

	printf("Check digit: %d\n", 9 - ((total - 1) % 10));

	return 0;
}
