// Displays the tax

#include <stdio.h>

int main(void)
{
    float income, tax_amount;

    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);

    if (income <= 750.0f)
        tax_amount = .01f * income;
    else if (income <= 2250.0f)
        tax_amount = 7.50f + .02f * (income - 750.0f);
    else if (income <= 3750.0f)
        tax_amount = 37.50f + .03f * (income - 2250.0f);
    else if (income <= 5250.0f)
        tax_amount = 82.50f + .04f * (income - 3750.0f);
    else if (income <= 7000.0f)
        tax_amount = 142.50f + .05f * (income - 5250.0f);
    else
        tax_amount = 230.50f + .06f * (income - 7000.0f);

    printf("Tax: %.2f", tax_amount);

    return 0;
}
