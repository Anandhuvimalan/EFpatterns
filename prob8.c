#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (4 * i + 1) * (i % 2) + (4 * i + 2) * ((i - 1) % 2); j++)
        {
            if (j <= (1 * (i % 2)) + (2 * ((i - 1) % 2)))
            {
                printf("*\n");
            }
            else
            {

                if (i == 3 && j == 12 || i == 4)
                {
                    break;
                }
                printf("* ");
            }
        }
        if (i == 4)
        {
            break;
        }

        printf("\n");
    }
    return 0;
}
