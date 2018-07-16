// Calculates a broker's and a rival's commission

#include <stdio.h>

int main(void)
{
    int share_number;
    float broker_commission, rival_commission, share_price, value;

    printf("Enter number of shares: ");
    scanf("%d", &share_number);
    printf("Enter price per share: ");
    scanf("%f", &share_price);

    value = share_number * share_price;

    if (share_number < 2000)
        rival_commission = 33 + (.3f * share_number);
    else
        rival_commission = 33 + (.2f * share_number);

    if (value < 2500.00f)
        broker_commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        broker_commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        broker_commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        broker_commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        broker_commission = 155.00f + .0011f * value;
    else
        broker_commission = 255.00f + .0009f * value;

    if (broker_commission < 39.00f)
        broker_commission = 39.00f;

    printf("Brokers commission: $%.2f\n", broker_commission);
    printf("Rivals commission: $%.2f\n", rival_commission);

    return 0;
}
