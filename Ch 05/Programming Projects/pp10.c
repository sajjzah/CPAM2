// Converts a numerical grade into letter

#include <stdio.h>

int main(void)
{
    int grade, gr;

    printf("Enter a numerical grade: ");
    scanf("%d", &grade);

    gr = grade / 10;

    switch (gr)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("Letter grade: F\n");
        break;
    case 6:
        printf("Letter grade: D\n");
        break;
    case 7:
        printf("Letter grade: C\n");
        break;
    case 8:
        printf("Letter grade: B\n");
        break;
    case 9:
        printf("Letter grade: A\n");
    case 10:
        if (grade == 100)
        {
            printf("Letter grade: A\n");
            break;
        }
    default:
        printf("Grade incorrect\n");
        break;
    }

    return 0;
}
