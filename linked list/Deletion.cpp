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
void Insert_At_Tail(node *&head, int key)
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
void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
}
void DeleteHead(node *&head)
{
    node *ToDelete = head;
    head = head->next;
    delete ToDelete;
}

void Deletion(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        DeleteHead(head);
        return;
    }
    node *temp = head;

    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *ToDelete = temp->next;
    temp->next = temp->next->next;
    delete ToDelete;
}
int main()
{
    node *head = NULL;
    Insert_At_Tail(head, 2);
    Insert_At_Tail(head, 3);
    Insert_At_Tail(head, 4);
    Insert_At_Tail(head, 5);
    display(head);
    Deletion(head, 5);
    DeleteHead(head);
    cout << endl;
    display(head);
    return 0;
}
