/*#include <stdio.h>
void fun(int, int);
int main()
{
    int a = 5;
    fun(a, a++);
}
void fun(int x, int y)
{
    printf("x=%d\t y= %d", x, y);
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int a, b, v, n, i;
void name(int);
int main()
{

    scanf("%d", &a);
    scanf("%d", &n);
    for (i = a; i <= n; i++)
    {
        if (i < 10)
            name(a);
        else
        {

            for (i = 10; i <= n; i++)
            {
                if (i % 2 == 1)
                    printf("odd\n");
                else
                    printf("even\n");
            }
            // scanf("%d\n%d", &a, &b);
            // void name(a);
            // void name(int a);
            // int name(b);

            return 0;
        }
    }
}

void name(int v)
{

    if (v <= 9)
    {
        switch (v)
        {
        case (1):
            printf("one\n");
            break;
        case (2):
            printf("two\n");
            break;
        case (3):
            printf("three\n");
            break;
        case (4):
            printf("four\n");
            break;
        case (5):
            printf("five\n");
            break;
        case (6):
            printf("six\n");
            break;
        case (7):
            printf("seven\n");
            break;
        case (8):
            printf("eight\n");
            break;
        case (9):
            printf("nine\n");
            break;
        }
    }

    return;
}
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char S[200], Wi[200];
    int N, z, count = 0, i, j = 0, k, siz;
    scanf("%[^\n]%*c", S);
    siz = strlen(S);
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("\n");
        scanf("%[^\n]%*c", Wi);
        z = strlen(Wi);
        for (j = 0; j < z; j++)
        {
            for (k = 0; k < siz; k++)
            {
                if (Wi[j] == S[k])
                {
                    count = 1;
                    break;
                }
                else
                    count = 0;
            }
            if (count == 0)
                break;
        }
        if (count == 1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
