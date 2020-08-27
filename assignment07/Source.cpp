#include <stdio.h>
int main()
{
    int n, i, j, s;
    scanf_s("%d",&n);
    n = n - 1;
    for (i = n; i > 0; i--)
    {
        for (j = n; j >= i; j--)
        {
            printf("* ");
        }

        s = i * 2 - 2;
        while (s >= 0)
        {
            printf("  ");
            s--;
        }

        for (j = i; j <= n; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    
    for (i = n; i >= 0; i--)
    {
        printf("* ");
    }

    for (i = 1; i <= n; i++)
    {
        printf("* ");
    }

    printf("\n");

    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            printf("* ");
        }

        s = i * 2 - 2;
        while (s >= 0)
        {
            printf("  ");
            s--;
        }

        for (j = i; j <= n; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}