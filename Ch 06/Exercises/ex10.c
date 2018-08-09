// These two for loops are equivalent
for (int i = 0; i < 10; i++)
{
    if (i == 5)
        continue;
    printf("%d ", i);
}

for (int i = 0; i < 10; i++)
{
    if (i == 5)
        goto label;
    printf("%d ", i);

label:
    ;
}
