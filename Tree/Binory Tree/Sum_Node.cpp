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
int sumNode(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return sumNode(root->left) + sumNode(root->right) + root->data;
}
int main()
{
    struct node *root = new node(23);
    root->left = new node(34);
    root->right = new node(54);
    root->left->left = new node(4);
    root->left->right = new node(5);
    cout << sumNode(root);
    return 0;
}
