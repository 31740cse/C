#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
void printbst(struct node *root)
{
    // printf("hello");
    if (root == NULL)
        return;
    printbst(root->left);
    printf("%d ", (root->data));
    printbst(root->right);
}
struct node *getnode(int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->left = temp->right = NULL;
    temp->data = val;
    return temp;
}
void insert(struct node **root, int val)
{
    struct node *prev = NULL;
    struct node *temp = *root;
    if ((temp) == NULL)
    {
        (*root) = getnode(val);
        return;
    }
    while ((temp) != NULL)
    {
        prev = temp;
        if ((temp)->data == val)
        {
            printf("element can't be inserted\n");
            return;
        }
        else if ((temp)->data < val)
            (temp) = (temp)->right;
        else
            temp = (temp)->left;
    }

    if (val < ((prev)->data))
        prev->left = getnode(val);
    else
        prev->right = getnode(val);
    return;
}
int main()
{
    system("clear");
    struct node *root = NULL;
    insert(&root, 4);
    insert(&root, 1);
    insert(&root, 2);
    insert(&root, 9);
    insert(&root, 14);
    insert(&root, 6);
    printbst(root);
    return 0;
}