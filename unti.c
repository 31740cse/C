#include <stdio.h>
#include <math.h>
// // void john(int);

// void john(int *t)

// {
//     *t = 89;
//     return;
// }
// int main()
// {
//     int n;
//     printf("enter a number here ");
//     scanf("%d", &n);
//     john(&n);
//     printf("%d", n);
// }

#define N 6

// int main()
// {
//     int m[N], i;
//     for (i = 0; i < N; i++)
//     {
//         printf("enter numers here for %d index ", i);
//         scanf("%d", &m[i]);
//     }
//     // for (i = 0; i < N; i++)
//     // {
//     printf("%d", m[3]);
//     // }
//     return 0;
// }

int fun1(int);
int fun2(int);
int a = 5;
int main()
{
    int a = 10;
    a = fun1(a);
    printf("%d", a);
}
int fun1(int b)
{
    b = b + 10;
    b = fun2(b);
    return b;
}
int fun2(int b)
{
    int c;
    c = a + b;
    return c;
}
/*
int main()
{
    // int sahu[] = {4, 5, 8, 6, 7, 8}, i;
    int sahu[] = {4, 5, 8}, i;
    // for (i = 0; i < 4; i++)

    printf("%d ", sahu[0]);
    printf("%d ", sahu[1]);
    printf("%d ", sahu[2]);
    printf("%d ", sahu[3]);
    printf("%d ", sahu[4]);
    printf("%d ", sahu[5]);
    printf("%d ", sahu[6]);
    printf("%d ", sahu[7]);
    printf("%d ", sahu[8]);
    printf("%d ", sahu[9]);
    printf("%d ", sahu[10]);
    printf("%d ", sahu[11]);
    printf("%d ", sahu[12]);
    printf("%d ", sahu[13]);
}

int fun_avg(int, int, int);
float avg;
int main()
{
    int a = 5, b = 6, c = 7;
    scanf("%d %d %d", &a, &b, &c);
    fun_avg(a, b, c);
    printf("%.2f ", avg);
}

int fun_avg(int a, int b, int c)
{
    // float avg;
    avg = (a + b + c) / 3;
    return avg;
}
*/