// divides the money entered into smaller amounts

#include <stdio.h>

int main(void)
{
	int money, bill_20, bill_10, bill_5, bill_1;

	printf("Enter a dollar amount: ");
	scanf("%d", &money);

	bill_20 = money / 20;
	money = money - 20*bill_20;
	bill_10 = money / 10;
	money = money - 10*bill_10;
	bill_5 = money / 5;
	money = money - 5*bill_5;
	bill_1 = money;

	printf("\n$20 bills: %d\n", bill_20);
	printf("$10 bills: %d\n", bill_10);
	printf("$5 bills: %d\n", bill_5);
	printf("$1 bills: %d\n", bill_1);

	return 0;
}
