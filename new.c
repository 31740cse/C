#include <stdio.h>
int che(int j, int k, int l)
{
    int p;
    j = 20;
    k = 6;
    l = 0;
    p = j + k + l;
    return p;
}
int main()
{
    int n = 10, v = 5, r = 3, x;
    x = che(n, v, r);
    printf("%d %d %d", n, v, r);
    return 0;
}