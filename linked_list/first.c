#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head = NULL;
    struct node *ptr = head;

    for (int i = 0; i < 5; i++)
    {
        if (head == NULL)
        {
            head = malloc(sizeof(struct node));
            ptr = head;
        }
        else
        {
            ptr->next = malloc(sizeof(struct node));
            ptr = ptr->next;
            ptr->next = NULL;
        }
        int temp;
        scanf("%d", &temp);
        ptr->data = temp;
    }

    ptr = head;

    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}