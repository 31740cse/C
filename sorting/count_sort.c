#include <stdio.h>
#include <stdlib.h>
void sort(int *arr, int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
        max = max < arr[i] ? arr[i] : max;
    int *count = (int *)calloc((max + 1), sizeof(int));
    for (int i = 0; i < n; i++)
        count[arr[i]]++;
    for (int i = 1; i <= max; i++)
        count[i] += count[i - 1];
    int *temp = (int *)malloc(n * sizeof(int));
    for (int i = n - 1; i >= 0; i--)
    {
        temp[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
    free(temp);
}
int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}