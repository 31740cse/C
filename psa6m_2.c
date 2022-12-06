#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, n, j = 10, q = -1, p, r, m = 0;
    scanf("%d", &n);
    r = n;
    a = n;
    for (; r > 0; q++)
    {
        r = r / 10;
    }

    p = pow(j, q);
    printf("%d", p);

    // for (; n > 0; n = n / p)
    // {
    //     n = n / p;
    //     if (n % 2 != 0)
    //     {
    //         printf("%d", n);
    //         m++;
    //     }
    //     n = a;
    //     p = p / 10;
    // }

    // if (m == 0)
    //     printf("0");

    return 0;
}
