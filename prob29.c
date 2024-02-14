#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 4 * i + 2; j++)
        {
            if (j < 4 * i)
            {

                printf("* ");
            }
            else if (j == 4 * i || j == 4 * i + 2)
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
    return 0;
}