#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *right;
    struct node *left;
};
struct node *creatNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->right = NULL;
    n->left = NULL;
}
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
int main()
{
    struct node *p = creatNode(3);
    struct node *p1 = creatNode(3);
    struct node *p2 = creatNode(3);
    p->left = p1;
    p->right = p2;
    preorder(p);
    return 0;
}
