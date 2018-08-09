// Calculates the greatest common divisor

#include <stdio.h>

int main(void)
{
    int num1, num2, temp, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    while (num2 != 0)
    {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }

    gcd = num1;

    printf("Greatest common divisor: %d", gcd);

    return 0;
}
