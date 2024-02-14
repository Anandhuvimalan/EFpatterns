#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= -i + 12; j++)
        {
            if (j <= -i * 2 + 12)
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
