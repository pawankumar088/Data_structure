#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head, *tail = NULL;
void addNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
void display()
{
    struct node *current = head;
    if (current == NULL)
    {
        printf("Nothing to display");
    }

    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
void countNode()
{
    struct node *current = head;
    int count = 0;
    if (current == NULL)
    {
        printf("No element");
    }
    else
    {

        while (current != NULL)
        {
            count++;
            current = current->next;
        }
        printf("%d ", count);
    }
}
int main()
{
    addNode(32);
    addNode(332);
    addNode(322);
    // addNode(322);
    display();
    countNode();
    return 0;
}
