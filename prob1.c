//       pattern             head + tail            calculation (star count per L shapes)

//        * *                 2 + 3                  -> 5
//        *
//        *
//        *
//        * * * *             4 + 6                  -> 10
//        *
//        *
//        *
//        *
//        *
//        *
//        * * * * * *         6 + next will be 9     -> 15

//

//           * *                 2*i + 3*i                  -> 5*i
//  (i-> 1)  *
//           *
//           *

//           * * * *             4*i + 6*i                 -> 10*i
//           *
//           *
//  (i-> 2)  *
//           *
//           *
//           *

//  (i-> 3)  * * * * * *         6*i + next will be 9*i      -> 15*i
//           no need for the tail

//  here the main loop needs 3 iterations, that is n will be 3 ( the shape is growing for each iterations)

// 1st loop 5 stars , 2nd loop 10 stars , 3rd loop 15 stars(but stops at 6)

// 5 , 10 , 15 -> multiple of 5 -> 5*i

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
            // horizontal star printing
            if (j < 2 * i)
            {
                printf("* ");
            }
            else if (j == 2 * i)
            {
                printf("*\n");
            }
            // vertical star printing (tail)
            else
            {
                if (i == n)
                {
                    // no need of tail in the last loop
                    break;
                }
                printf("*\n");
            }
        }
    }
    return 0;
}
