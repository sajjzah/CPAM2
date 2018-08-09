// Finds the largest in a series of numbers entered by the user

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    float number, max = 0;

    while (true)
    {
        printf("Enter a number: ");
        scanf("%f", &number);

        if (number <= 0)
            break;
        else if (number > max)
            max = number;
    }

    printf("\nThe largest number entered was %.2f", max);

    return 0;
}
