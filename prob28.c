#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 3 * i + 1; j++)
        {
            if (j <= 1)
            {

                printf("*\n");
            }
            else
            {
                if ((j - 1) % 3 == 0)
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