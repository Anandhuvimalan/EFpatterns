#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (5 + i * i - i + 2) * (i % 2) + (10 + i * i - i + 2) * ((i - 1) % 2); j++)
        {
            if (j <= (5) * (i % 2) + (10) * ((i - 1) % 2))
            {
                printf("* ");
            }
            else
            {
                printf("\n*");
            }
        }
        printf("\n");
    }
    return 0;
}