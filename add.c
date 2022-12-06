#include <stdio.h>
int c, p = 0;
int sum();
int main()
{
    printf("%d", main());
    return 0;
}
int sum()
{
    printf("enter numbers here with space and in teh last press enter to calculate sum");
    do
    {
        scanf("%d", c);
        p = p + c;
    } while (c != '\n');
    return p;
}
