#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2 * i + 1) * (i % 2) + (2 * i + 3) * ((i - 1) % 2); j++)
        {
            if (j <= (1) * (i % 2) + (3) * ((i - 1) % 2))
            {
                printf("*\n");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}