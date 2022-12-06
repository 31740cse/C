#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a>b)
        if(a>c)
            printf("%d", a);
        else
            printf("%d",c);
    else if(b>c)
            if(b>a)
                printf("%d",b);
            else
                printf("%d",a);
    else
        printf("%d", c);
    
    return 0;
}
