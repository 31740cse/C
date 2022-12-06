#include <stdio.h>
int *arr(int size)
{
    int sahu[size], i;
    int *p = sahu;
    for (i = 0; i < size; i++)
    {

        scanf("%d", &sahu[i]);
    }
    return p;
}
int main()
{
    int n, i;
    int *c;
    printf("enter size of array ");
    scanf("%d", &n);
    c = arr(n);
    for (i = 0; i < n; i++)
        printf("%d ", c[i]);
}