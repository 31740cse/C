#include <stdio.h>
int n;
int *get_array();
void bin_search(int *);
int *short_array(int *);
void swap(int *, int *);

int main()
{
    int i;
    int *array;
    array = get_array();
    printf("the shorted array is ");

    array = short_array(array);
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);
    bin_search(array);
    return 0;
}
int *get_array()
{
    int i;
    printf("enter number of element in array ");
    scanf("%d", &n);
    int array[n];
    int *pointer = array;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    return pointer;
}
int *short_array(int *arr)
{
    int i, j;
    int *p;
    p = arr;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
            else
                continue;
        }
    }

    return p;
}
void swap(int *l, int *k)
{
    int c;
    c = *k;
    *k = *l;
    *l = c;
    return;
}
void bin_search(int *arr)
{
    int first, last, middle, i, num;

    printf("which number you want to search ");
    scanf("%d", &num);
    first = 0;
    last = n + 1;

x:
    middle = (first + last) / 2;
    if (num == arr[middle])
    {
        printf("given number is present on the %dth place ", middle + 1);
        return;
    }
    else if (first == last)
        printf("number is not found");
    else if (num > arr[middle])
    {
        last = middle;
        goto x;
    }
    else if (num < middle)
    {
        first = middle;
        goto x;
    }
}
