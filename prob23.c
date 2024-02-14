#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 11 - i; j++)
        {
            if (j <= 11 - 2 * i)
            {
                if (j % (6 - i) == 0)
                {
                    printf("_ _\n_ ");
                }
                else
                {
                    printf("X ");
                }
            }
            else
            {
                printf("\nX");
            }
        }
        printf("\n");
    }
    return 0;
}