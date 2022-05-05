#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int countNode(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return countNode(root->left) + countNode(root->right) + 1;
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data<<" ";
    inorder(root->right);
}
int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    cout << countNode(root);
    inorder(root);
    return 0;
}

/*   1
  2     3
4  5       */



1
