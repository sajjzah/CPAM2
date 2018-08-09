// Reduces fraction to lowest terms

#include <stdio.h>

int main(void)
{
    int num1, num2, numerator, denominator, temp, gcd;

    printf("Enter a fraction: ");
    scanf("%d /%d", &numerator, &denominator);

    num1 = numerator;
    num2 = denominator;

    while (num2 != 0)
    {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }

    gcd = num1;
    numerator /= gcd;
    denominator /= gcd;

    printf("In lowest terms: %d/%d", numerator, denominator);

    return 0;
}
