// Finds the largest and smallest of four integers

#include <stdio.h>

int main(void)
{
    int number1, number2, number3, number4,
        smallest1, largest1, smallest2, largest2, smallest, largest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &number1, &number2, &number3, &number4);

    if (number1 < number2)
    {
        smallest1 = number1;
        largest1 = number2;
    }
    else
    {
        smallest1 = number2;
        largest1 = number1;
    }

    if (number3 < number4)
    {
        smallest2 = number3;
        largest2 = number4;
    }
    else
    {
        smallest2 = number4;
        largest2 = number3;
    }

    if (smallest1 > smallest2)
        smallest1 = smallest2;
    if (largest1 < largest2)
        largest1 = largest2;

    printf("Largest: %d\n", largest1);
    printf("Smallest: %d\n", smallest2);

    return 0;
}
