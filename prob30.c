#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 5 * i; j++)
        {
            if (j <= 2 * i)
            {
                if (j % i == 0)
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

                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}