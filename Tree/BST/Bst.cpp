#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
struct node
{
    int data;
    node *right, *left;
    node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};
node *insertBst(node *root, int val)
{
    if (root == NULL)
    {
        return new node(val);
    }

    if (val < root->data)
    {
        root->left = insertBst(root->left, val);
    }
    else
    {
        root->right = insertBst(root->right, val);
    }
    return root;
}
void inOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
int main()
{
    node *root = NULL;
    root = insertBst(root, 5);
    insertBst(root, 4);
    insertBst(root, 1);
    insertBst(root, 44);
    insertBst(root, 244);
    insertBst(root, 54);
    inOrder(root);
    return 0;
}
