#include <stdio.h>
int main()
{
    int r1, r2, c1, c2, i, j, s = 0, k;
    printf("enter number of rows of the first matrix :");
    scanf("%d", &r1);
    printf("enter the coloumns of the first matrix :");
    scanf("%d", &c1);
    printf("enter the number of rows of second matrix :");
    scanf("%d", &r2);
    printf("enter the number of coloumns of the second matrix :");
    scanf("%d", &c2);
    int a[r1][c1];
    int b[r2][c2];

    if (c1 != r2)
    {
        printf("matrix multiplication is not possible ");
        goto z;
    }
    printf("enter the elements of the first matrix ");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the elements of the second matrix ");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (k = 0; k < c2; k++)
        {
            for (j = 0; j < r2; j++)
            {
                s = s + a[i][j] * b[j][k];
            }
            printf("%d ", s);
            s = 0;
            printf("\n");
        }
    }
z:

    return 0;
}