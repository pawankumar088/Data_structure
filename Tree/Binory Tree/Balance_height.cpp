#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh, rh) + 1;
}
bool isBalance(Node *root)
{
    if (root == NULL)
    {
        return true;
    }

    if (isBalance(root->left) == false)
    {
        return false;
    }
    if (isBalance(root->right) == false)
    {
        return false;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    if (abs(lh - rh) <= 1)
    {
        return true;
    }
    return false;
}
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    if (isBalance)
    {
        cout << "Tree is balance";
    }
    else
    {
        cout << "Tree is not balnace";
    }
    return 0;
}
/*     1
      / \
     2   3
    / \ / \
   4  56   7 */
