#include <stdio.h>
#include <stdlib.h>
struct node *add_data(struct node *);
struct SinglyLinkedListNode
{
    int data;
    SinglyLinkedListNode *next;
};
SinglyLinkedListNode *insertNodeAtTail(SinglyLinkedListNode *head, int data)
{

    SinglyLinkedListNode *ptr = head;

    while (1)
    {
        if (ptr->next == NULL)
            break;
        ptr = (ptr->next);
    }
    ptr->next = (SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
    ptr = (ptr->next);
    ptr->data = data;
    ptr->next = NULL;
    return head;
}
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

    printf("enter the number that you want to add at the end");
    int num;
    scanf("%d", &num);
    head = insertNodeAtTail(head, num);
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->link;
    }
    return 0;
}
struct node *add_data(struct node *head)
{
    struct node *ptr = malloc(sizeof(struct node));
    scanf("%d", &(ptr->data));
    ptr->link = NULL;
    head->link = ptr;

    return ptr;
}