#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertattail(node *&head, int key)
{
    node *n = new node(key);
    node *temp = head;
    if (head == NULL)
    {
        head = n;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void insertathead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
    cout << endl;
}
bool search(node *head, int key)
{
    while (head != NULL)
    {
        if (head->data == key)
        {
            return true;
        }
        head = head->next;
    }
    return false;
}
int main()
{
    node *head = NULL;
    insertattail(head, 234);
    insertattail(head, 4);
    insertattail(head, 1);
    insertathead(head, 34);
    display(head);
    if (search(head, 234))
    {
        cout << "Present";
    }
    else
    {
        cout << "Not Present";
    }

    return 0;
}
