#include <stdio.h>
int main()
{
    int n, j, i = 1;
    printf("enter the number of rows");
    scanf("%d", &n);

    for (i; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}