#include <stdio.h>
int add();

int main()
{
    int a, b, ad;
    a = 4;
    b = 5;
    ad = add(a, b);
    printf("%d", ad);
}
int add(int n, int r)
{
    int add;
    add = n + r;
}
