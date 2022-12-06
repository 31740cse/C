#include <stdio.h>
int fact(int);
int n = 1, num;
long long int p;
int main()
{
    printf("enter a number here ");
    scanf("%d", &num);
    p = fact(num);
    printf("%d", p);
    return 0;
}
int fact(int n)
{
    if (n == 0)
        return 1;
    if (n > 0)
        return (n * fact(n - 1));
}
