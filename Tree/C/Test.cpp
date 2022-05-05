#include <iostream>
#include <stack>
using namespace std;
#define n 8
class check
{
    int *arr;
    int top;

public:
    check()
    {
        top = -1;
        arr = new int[n];
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "stack overflow";
        }
        top++;
        arr[top] = x;
    }
    int Top()
    {
        return arr[top];
    }
};
int main()
{
    check p;
    p.push(23);
    cout << p.Top();
    return 0;
}
