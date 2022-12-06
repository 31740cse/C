#include <stdio.h>
#include <math.h>

int digi(int);
void check(int);
int main()
{
    int n, x;
    scanf("%d", &n);
    check(n);
    //  x = digi(7845);
    // printf("%d", x);
    return 0;
}
int digi(int num)
{
    int n, p, a = 0;
    for (num; num > 0; a++)
    {
        num = num / 10;
    }
    p = a - 1;
    return p;
}

void check(int num)
{
    int n, d, x, p, a = 9;
    d = digi(num);
    for (; d >= 0; d--)
    {
        p = pow(10, d);
        n = num / p;
        num = num % p;
        if (n > 0)
            printf("%d", n);
        else
            printf("%d", a);
    }
    if (num == 0 && d == 0)
    {
        printf("9");
        d--;
    }
    return;
}