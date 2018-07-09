// reverse a three-digit number

#include <stdio.h>

int main(void)
{
    int number, digit0, digit1, digit2;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    digit0 = number % 10;
    digit1 = (number / 10) % 10;
    digit2 = number / 100;

    printf("The reversal is: %d%d%d", digit0, digit1, digit2);

    return 0;
}
