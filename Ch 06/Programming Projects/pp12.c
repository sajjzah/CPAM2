// Approximates e

#include <stdio.h>

int main(void)
{
    float e = 0.0f, fact, epsilon;

    printf("Enter epsilon: ");
    scanf("%f", &epsilon);

    for (int i = 0; ; i++)
    {
        fact = 1.0f;

        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }

        if ((1 / fact) < epsilon)
            break;

        e += 1 / fact;
    }

    printf("e = %f", e);

    return 0;
}
