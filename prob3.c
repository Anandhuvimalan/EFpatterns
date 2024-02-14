#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 3;
    printf("*\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (i * i + 3 * i); j++)
        {
            if (j <= i * i)
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
