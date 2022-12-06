#include <stdio.h>
// int check(int num);
int main()
{
    int num;
    printf("enter a number here ");
    scanf("%d", &num);
    int z = check(num);
    if (z == 0)
        printf("even");
    else if (z == 1)
        printf("odd");
}
int check(int num)
{
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return check(num - 2);
}