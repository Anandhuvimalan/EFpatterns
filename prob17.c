#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 3 * i * i + 3; j++)
        {
            if (j <= 3 * i * i)
            {
                if (j % (3 * i) == 0)
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
                printf("*\n");
            }
        }
    }
    return 0;
}