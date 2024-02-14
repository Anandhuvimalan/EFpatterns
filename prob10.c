#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 7 * i; j++)
        {
            if (j <= 5 * i)
            {
                printf("* ");
            }
            else
            {
                printf("\n*");
            }
        }
        printf("\n");
    }
    return 0;
}
