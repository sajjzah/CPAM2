// Displays time in 12-hour mode

#include <stdio.h>

int main(void)
{
    int hours, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    if (hours >= 0 && hours <= 12)
        printf("Equivalent 12-hour time: %.2d:%.2d AM", hours, minutes);
    else if (hours > 12 && hourss <= 24)
        printf("Equivalent 12-hour time: %.2d:%.2d PM", hours - 12, minutes);

    return 0;
}
