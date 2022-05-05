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
int calcHeight(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    return max(leHeight, rHeight) + 1;
}
int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout << calcHeight(root);
    return 0;
}
/*     1
      / \
     2   3
    / \ / \
   4  56   7 */

4 2 1
