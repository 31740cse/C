#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int a, b, v;
int main()
{
    scanf("%d %d", &a, &b);

    if (a < 10)
    {
        switch (a)
        {
        case (1):
            printf("one\n");

        case (2):
            printf("two\n");

        case (3):
            printf("three\n");

        case (4):
            printf("four\n");

        case (5):
            printf("five\n");

        case (6):
            printf("six\n");

        case (7):
            printf("seven\n");

        case (8):
            printf("eight\n");

        case (9):
            printf("nine\n");
        }
    }
    v = b;
    b = 10;
    if (v > 9)
        for (b; b <= v; b++)
        {
            if (b % 2 == 0)
                printf("even\n");
            else
                printf("odd\n");
        }
}
