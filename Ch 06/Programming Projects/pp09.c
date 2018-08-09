// Calculates the remaining balance on a loan

#include <stdio.h>

int main(void)
{
    float loan_amount, interest_rate, monthly_payment,
          payments_number, balance;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    printf("Enter number of payments: ");
    scanf("%f", &payments_number);

    interest_rate = (interest_rate / 100.0f) / 12.0f;
    balance = loan_amount;

    printf("\n");

    for (int i = 0; i < payments_number; i++)
    {
        balance = (balance - monthly_payment) +
                  balance * interest_rate;

        printf("Balance remaining after payment #%d: $%.2f\n", i + 1, balance);
    }

    return 0;
}
