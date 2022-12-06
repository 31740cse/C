#include <stdio.h>
void selection_sort(int *, int);
void swap(int *a, int *b);
int main()
{
    int i, n;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    selection_sort(arr, n);
    for (i = 0; i < n - 1; i++)
        printf("%d ", arr[i]);
}
void selection_sort(int *arr, int n)
{
    int *p = arr;
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (p[j] > p[j + 1])
                swap(&p[j], &p[j + 1]);
        }
    }

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    return;
}