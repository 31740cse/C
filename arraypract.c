/*
#include <stdio.h>
int n;
int *array()
{
    printf("enter number of element in array ");
    scanf("%d", &n);
    int i, arr[n];
    int *p = arr;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    return p;
}
int main()
{
    int i;
    int *num;

    num = array();
    for (i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}*/

#include <stdio.h>
int n;
int *arr()
{

    printf("enter number of element in array ");
    scanf("%d", &n);
    int arr[n], i;
    int *p = arr;
    printf("enter elments of arrays ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    return p;
}
int main()
{
    int i;
    int *arry;
    arry = arr();
    for (i = 0; i < n; i++)

        printf("%d ", arry[i]);
    return 0;
}