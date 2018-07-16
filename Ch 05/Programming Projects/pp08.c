// Displays closest flight time

#include <stdio.h>

int main(void)
{
    int hours, minutes, total_minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    total_minutes = hours * 60 + minutes;

    if (total_minutes <= (8 * 60 + 0) + (103 / 2))
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
    else if (total_minutes <= (9 * 60 + 43) + (96 / 2))
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
    else if (total_minutes <= (11 * 60 + 19) + (88 / 2))
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
    else if (total_minutes <= (12 * 60 + 47) + (73 / 2))
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
    else if (total_minutes <= (14 * 60 + 0) + (105 / 2))
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
    else if (total_minutes <= (15 * 60 + 45) + (195 / 2))
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
    else if (total_minutes <= (19 * 60 + 0) + (165 / 2))
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
    else
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");

    return 0;
}
