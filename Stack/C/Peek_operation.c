#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int IsEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int IsFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void Push(struct stack *ptr, int val)
{
    if (IsFull(ptr))
    {
        printf("Stack overflow ! cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->arr[ptr->top] = val;
        ptr->top++;
    }
}

int peek(struct stack *ptr, int i)
{
    int arrayInd = ptr->top - i + 1;
    if (arrayInd < 0)
    {
        printf("Not valid postion");
        return -1;
    }
    else
    {
        return ptr->arr[arrayInd];
    }
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    // printf("Struct has been created successfully\n ");
    // printf("Before Pushing Empty %d\n", IsEmpty(sp));
    // printf("Before Pushing Full %d\n", IsFull(sp));
    Push(sp, 324);
    Push(sp, 32);
    Push(sp, 4);
    Push(sp, 34);
    Push(sp, 3224);
    Push(sp, 3244);
    Push(sp, 564);
    Push(sp, 64);
    Push(sp, 524);
    Push(sp, 354); //>>>Pushed 10 value;
    // Push(sp, 354); //>>> Stack overflow since the size of stack is 10;
    for (int j = 1; j <= sp->top + 1; j++)
    {
        printf("The value at postion %d is %d\n", j, peek(sp, j));
    }

    return 0;
}
