#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= ((int)(i * i + 2 + 2 * i)); j++)
        {
            if (j <= 2 * i)
            {
                if (j % 2 == 0)
                {
                    printf("X\n");
                }
                else
                {
                    printf("X ");
                }
            }
            else
            {
                if (j - 2 * i <= i)
                {
                    printf("_ ");
                }
                else
                {
                    printf("X ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}