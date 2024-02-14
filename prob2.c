//          pattern                   head + tail         stars per shape

//           * * *                     3  +  1              4
//           *
//           * * * * * *               6  +  2              8
//           *
//           *
//           * * * * * * * * *         9  +  3              12
//           *
//           *
//           *

//          pattern                   head + tail         stars per shape

//   i->1    * * *                     3*i  +  1*i             4*i
//           *

//  main loop iteration count is 3 , so n=3. then on each iteration we have to grow this pattern
// for i=1 , the stars to be printed is 4 , for i=2 its 8 ,for i=3 its 12.
// j<=4*i

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 4 * i; j++)
        {
            // horizontal stars
            if (j < 3 * i)
            {
                printf("* ");
            }
            else if (j == 3 * i)
            {
                printf("*\n");
            }
            // vertical stars
            else
            {

                printf("*\n");
            }
        }
    }
    return 0;
}
