#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 5 * i; j++)
        {
            if (j <= i)
            {
                printf("*\n");
            }
            else
            {

                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
