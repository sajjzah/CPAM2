// calculates the remaining balance on a loan

#include <stdio.h>

int main(void)
{
    float loan_amount, interest_rate, monthly_payment,
          first_balance, second_balance, third_balance;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter m+-onthly payment: ");
    scanf("%f", &monthly_payment);

    // find monthly interest rate
    interest_rate = (interest_rate / 100.0f) / 12.0f;

    first_balance = (loan_amount - monthly_payment) +
                    loan_amount*interest_rate;
    second_balance = (first_balance - monthly_payment) +
                     first_balance*interest_rate;
    third_balance = (second_balance - monthly_payment) +
                    second_balance*interest_rate;

    printf("\nBalance remaining after first payment: $%.2f\n", first_balance);
    printf("Balance remaining after second payment: $%.2f\n", second_balance);
    printf("Balance remaining after third payment: $%.2f\n", third_balance);

    return 0;
}
