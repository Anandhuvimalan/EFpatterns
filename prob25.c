#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i + 6; j++)
        {
            if (j < 6)
            {
                printf("* ");
            }
            else if (j == 6)
            {
                printf("*\n");
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