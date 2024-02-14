#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 8 * i; j++)
        {
            if (j <= 5 * i)
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