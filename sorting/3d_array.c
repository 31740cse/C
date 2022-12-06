#include <stdio.h>/*
int main()
{
    int arr[] = {4, 3, 13, 6, 5, 4, 2, 3, 8, 6, 7, 93}, even[10], odd[10], i, j = 0, k = 0;
    for (i = 0; i < 12; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            j++;
        }
        else
        {
            odd[k] = arr[i];
            k++;
        }
    }
    printf("even! ");
    for (i = 0; i < j; i++)
        printf("%d ", even[i]);
    printf("\n");
    printf("odd! ");
    for (i = 0; i < k; i++)
        printf("%d ", odd[i]);
} */

int main()
{
    int i, j, k, n1, n2;
    scanf("%d %d", &n1, &n2);
    int arr[2][n1][n2];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < n1; j++)
        {
            for (k = 0; k < n2; k++)
                scanf("%d", &arr[i][j][k]);
        }
    }

    int sum = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
                sum += (arr[0][i][k]) * (arr[1][k][j]);
            printf("%d ", sum);
            sum = 0;
        }
        printf("\n");
    }
}
/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float d, c;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    int sum1 = a + b;
    int subs1 = a - b;
    float sum2 = c + d;
    float sub2 = c - d;
    printf("%d %d\n", sum1, subs1);
    printf("%.2f %.2f", sum2, sub2);
    return 0;
}*/