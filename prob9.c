#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (i * i) + i + 1; j++)
        {
            if (j <= i * i - i + 2)
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
