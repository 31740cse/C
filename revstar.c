

#include <stdio.h>
#include <math.h>
int main()
{
    int p, n, j, i = 1, t;
    printf("Entrer the number of rows ");
    scanf("%d", &n);
    t = n;
    j = 1;
    for (i; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j >= i)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }
}

/*

#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, j;
    printf("entre  number of rows here ");
    scanf("%d", &n);
    for (i; i < n; i++)
    {
        for(j;j<n;j++)
        {
            if(j)
        }
    }
}
*/