#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 3 * i + 3; j++)
        {
            if (j <= 1)
            {
                printf("*\n");
            }

            else
            {
                if (j == 3 * i + 3 && i % 2 == 1)
                {
                    printf("\n*\n");
                }
                else if (j == 3 * i + 3 && i % 2 == 0)
                {
                    printf("*\n");
                }
                else
                {
                    if (i == n)
                    {
                        break;
                    }
                    printf("* ");
                }
            }
        }
    }
    return 0;
}