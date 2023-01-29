#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void add_node(struct node **head)
{
    struct node **ptr = &(*head);
    int data;
    printf("enter the number which you want to add ");
    scanf("%d", &data);
    if (*head == NULL)
        *ptr = *head = (struct node *)malloc(sizeof(struct node));
    else
    {
        while ((*ptr)->next != NULL)
            *ptr = (*ptr)->next;
        *ptr = (*ptr)->next = (struct node *)malloc(sizeof(struct node));
    }
    (*ptr)->next = NULL;
    (*ptr)->data = data;
    return;
}
int main()
{
    struct node *head = NULL;
    int n;
    printf("enter the size of the list ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        add_node(&head);
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}