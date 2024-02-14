#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        int k = 1;
        for (int j = 1; j <= (int)((1.0 / 2) * i * i + (5.0 / 2) * i + 3); j++)
        {
            if (j == (int)((1.0 / 2) * k * k + (1.0 / 2) * k))
            {
                printf("*\n");
                k++;
            }

            else
            {
                printf("* ");
            }
        }
    }
    return 0;
}