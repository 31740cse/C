/*#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char strting[100] = "jhedgfhujg jhsdgf", ar[100] = " i am going to dinner", append[100];
    // for (i = 0;; i++)
    // {
    //     scanf("%c", &strting[i]);
    //     if (strting[i] == '\n')
    //         break;
    // }
    // strting[i] = '\0';
    strting[6] = 'g';
    // printf("%c", strting[6]);
    strcpy(ar, strting);
    printf("%d\n", strlen(ar));
    strcat(strting, ar);
    // printf("%d\n", strlen(append));
    printf(append);
}*/

//a11472o5t6
//0 2 1 0 1 1 1 1 0 0
//lw4n88j12n1
//0 2 1 0 1 0 0 0 2 0

#include <stdio.h>
int main()
{
    char ar[1000];
    int i;
    scanf("%[^\n]%*c", ar);
    for (i = 0;; i++)
    {
        printf("%c", ar[i]);
        if (ar[i + 1] == ' ')
            printf("\n");
        if (ar[i + 1] == '\n')
            break;
    }
}