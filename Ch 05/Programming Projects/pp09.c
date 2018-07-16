// Displays the earlier date between two dates entered

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int day1, month1, year1, day2, month2, year2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    bool first_earlier;

    if (year1 < year2)
        first_earlier = true;
    else if (year1 > year2)
        first_earlier = false;
    else
    {
        if (month1 < month2)
            first_earlier = true;
        else if (month1 > month2)
            first_earlier = false;
        else
        {
            if (day1 < day2)
                first_earlier = true;
            else if (day1 > day2)
                first_earlier = false;
            else
            {
                printf("Dates are same!\n");

                return 0;
            }
        }
    }

    if (first_earlier)
        printf("%d/%d/%.2d is earlier then %d/%d/%.2d\n",
               month1, day1, year1, month2, day2, year2);
    else
        printf("%d/%d/%.2d is earlier then %d/%d/%.2d\n",
               month2, day2, year2, month1, day1, year1);

    return 0;
}
