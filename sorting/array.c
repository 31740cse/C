#include <stdio.h>
int n;
int *get_array();
int main()
{
    int i;
    int *array;
    array = get_array();
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);
}
int *get_array()
{
    printf("enter number of element in array ");
    scanf("%d", &n);
    int i, array[n];
    int *p = array;
    for (i = 0; i < n; i++)
    {
        printf("enter %dth number of array ", i + 1);
        scanf("%d", array + i);
    }
    return p;
}