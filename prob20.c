#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 7 * i; j++)
        {
            if (j <= 2 * i)
            {
                if (j % 2 == 0)
                {
                    printf("*\n");
                }
                else
                {
                    printf("* ");
                }
            }
            else
            {
                if (i == n)
                {
                    break;
                }
                else if (j == 7 * i)
                {
                    printf("*\n");
                }
                else
                {
                    printf("* ");
                }
            }
        }
    }
    return 0;
}