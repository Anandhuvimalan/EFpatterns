#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 11 - 2 * i; j++)
        {
            if (j < 9 - 2 * i)
            {
                if (j % (5 - i) == 0)
                {
                    printf("X\n");
                }
                else
                {
                    printf("X ");
                }
            }
            else if (j == (9 - 2 * i))
            {
                printf("X\n");
            }
            else
            {
                if (i == n)
                {
                    break;
                }
                printf("X\n");
            }
        }
    }
    return 0;
}