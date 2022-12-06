#include <stdio.h>
#include <math.h>
int a, num, b, sum = 1;
int fnum(int, int, int);
int digit(int);
int super(int);
int main()
{
    int l;
    scanf("%d %d\n", &num, &b);
    // num1 = num;
    l = super(fnum(num, b, digit(num)));
    printf("%d", l);
}

int fnum(int n, int k, int l)
{
    int i, p;
    p = pow(10, l);
    for (i = 1; i <= k; i++)
    {
        n = n * p;
    }
    return n;
}
int digit(int digi)

{
    int d;
    for (; digi > 0; digi / 10)
    {
        d++;
    }
    return d;
}
int super(int j)
{
    int s;
    while (j > 0)
    {
        s = j % 10;
        sum = sum + s;
        j = j / 10;
    }

    if (sum > 9)
        return super(sum);
    else
        return sum;
}
