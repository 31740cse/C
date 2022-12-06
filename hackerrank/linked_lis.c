#include <stdio.h>
#include <stdlib.h>
struct node *add_data(struct node *);
struct node
{
    int data;
    struct node *link;
};
int main()
{
    int i, n;
    printf("enter the numbers of elements you want to save ");
    scanf("%d", &n);

    struct node *head = (malloc(sizeof(struct node)));
    scanf("%d", &(head->data));
    head->link = NULL;
    struct node *ptr = head;

    for (i = 1; i < n; i++)
    {
        ptr = add_data(ptr);
    }
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->link;
    }
}
struct node *add_data(struct node *head)
{
    struct node *ptr = malloc(sizeof(struct node));
    scanf("%d", &(ptr->data));
    ptr->link = NULL;
    head->link = ptr;

    return ptr;
}