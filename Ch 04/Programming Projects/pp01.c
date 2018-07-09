// reverse a two-digit number

#include <stdio.h>

int main(void)
{
    int number, digit0, digit1;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    digit0 = number % 10;
    digit1 = number / 10;

    printf("The reversal is: %d%d", digit0, digit1);

    return 0;
}
