#include <stdio.h>
#include <math.h>

int main()
{
    int n, i = 1, j, r;
    printf("enter number of rows ");
    scanf("%d", &n);
    r = ((2 * n) - 1);
    for (i; i <= n; i++)
    {
        for (j = 1; j < r; j++)
        {
            if (j >= n - (i - 1) && j <= n + (i - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}