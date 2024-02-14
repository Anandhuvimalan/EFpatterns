#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 6 * i; j++)
        {
            if (j <= 3 * i)
            {
                printf("* ");
            }
            else
            {
                if (i == n)
                {
                    break;
                }

                printf("\n*");
            }
        }
        printf("\n");
    }
    return 0;
}
