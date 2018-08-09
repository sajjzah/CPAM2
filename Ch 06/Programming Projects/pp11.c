// Approximates e

#include <stdio.h>

int main(void)
{
    int n;
    float e = 0.0f, fact;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        fact = 1.0f;

        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }

        e += 1 / fact;
    }

    printf("e = %f", e);

    return 0;
}
