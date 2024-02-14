#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 7;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if ((n - abs(n - i) == 1 || n - abs(n - j) == 1 || n - abs(n - i) == n - abs(n - j)) && ((n - abs(n - i)) % 2 == 1) && ((n - abs(n - j)) % 2 == 1))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}