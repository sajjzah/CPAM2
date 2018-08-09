// Displays the earlier date

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int day, month, year, day_temp, month_temp, year_temp;
    bool first_earlier;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    while (true)
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month_temp, &day_temp, &year_temp);

        if ((month_temp == 0) && (day_temp == 0) && (year_temp == 0))
            break;

        if (year < year_temp)
            first_earlier = true;
        else if (year > year_temp)
            first_earlier = false;
        else
        {
            if (month < month_temp)
                first_earlier = true;
            else if (month > month_temp)
                first_earlier = false;
            else
            {
                if (day < day_temp)
                    first_earlier = true;
                else if (day > day_temp)
                    first_earlier = false;
                else
                {
                    printf("Dates are same!\n");

                    return 0;
                }
            }
        }

        if (!first_earlier)
        {
            month = month_temp;
            day = day_temp;
            year = year_temp;
        }
    }

    printf("%d/%d/%.2d is earliest date\n", month, day, year);

    return 0;
}
