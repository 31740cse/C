/*#include <stdio.h>
int n;
int *getarray();
void swap(int *a, int *b);
void array_short(int array[], int size);

void swap(int *a, int *b)
{
    int c;
    c = *b;
    *b = *a;
    *a = c;
    return;
}
void array_short(int array[], int size)
{
    int i, j;

    // int *p = arr;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
        }
    }
}
int main()
{
    int i;
    int *shorted_arr;
    int *arr;
    arr = getarray();
    // for (i = 0; i < n; i++)
    // printf("%d ", arr[i]);
    array_short(arr, n);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
int *getarray()
{
    int i;
    printf("enter number of element for array ");
    scanf("%d", &n);
    int arr[n];
    int *p = arr;
    for (i = 0; i < n; i++)
    {
        printf("enter elements for %d position in array;", i + 1);
        scanf("%d", &arr[i]);
    }
    return p;
}*/

#include <stdio.h>
int n;
int *getarray();
void swap(int *a, int *b);
void array_short(int *array, int size);

void swap(int *a, int *b)
{
    int c;
    c = *b;
    *b = *a;
    *a = c;
    return;
}
void array_short(int *array, int size)
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
int main()
{
    int i;
    int *shorted_arr;
    int *arr;
    arr = getarray();
    // for (i = 0; i < n; i++)
    // printf("%d ", arr[i]);
    array_short(arr, n);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
int *getarray()
{
    int i;
    printf("enter number of element for array ");
    scanf("%d", &n);
    int arr[n];
    int *p = arr;
    for (i = 0; i < n; i++)
    {
        printf("enter elements for %d position in array; ", i + 1);
        scanf("%d", &arr[i]);
    }
    return p;
}