#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

void swap(int *a, int *b)
{
    int c;
    c = *b;
    *b = *a;
    *a = c;
    return;
}
void array_sort(int *array, int size)
{
    int i, j;

    int *p = array;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (p[j] > p[j + 1])
                swap(&array[j], &array[j + 1]);
        }
    }
}
void calculate_the_maximum(int n, int k)
{
    int i, j;
    int and[10000], or [10000], xor[10000], s = 0;
    for (i = 1; i <= n - 1; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            and[s] = i & j;
            or [s] = i | j;
            xor[s] = i ^ j;
            s++;
        }
    }
    array_sort(and, (sizeof(and)) / (sizeof(and[0])));
    array_sort(or, sizeof(or) / sizeof(or [0]));
    array_sort(xor, sizeof(xor) / sizeof(xor[0]));

    for (i = 0;; i++)
    {
        s = i - 1;
        if (and[i] == k)
        {
            printf("%d\n", and[s]);
            break;
        }
    }
    for (i = 0;; i++)
    {
        s = i - 1;
        if (or [i] == k)
        {
        x:
            if (or [s] ! < k)
            {
                if (s == 0)
                    printf("0");
                else
                {
                    s = s - 1;
                    goto x;
                }
            }
            printf("%d\n", or [s]);
            break;
        }
    }
    for (i = 0;; i++)
    {
        s = i - 1;
        if (xor[i] == k)
        {
            printf("%d\n", xor[s]);
            break;
        }
    }
    return;
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
