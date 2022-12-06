#include <stdio.h>
#include <math.h>
int main()
{
    int p, n, j, i = 1;
    printf("Entrer the number of rows ");
    scanf("%d", &n);
    for (i; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}