#include <bits/stdc++.h>
using namespace std;
#define n 10
class check
{
    int *arr;
    int front;
    int back;

public:
    int b = 2;
    check()
    {
        arr = new int(n);
        front = -1;
        back = -1;
    }
    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue overflow";
            return;
        }
        back++;
        arr[back] = x;
        if (front == -1)
        {
            front++;
        }
    }
    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue underflow";
            return -1;
        }

        return arr[front];
    }
    void dequeue()
    {
        if (front == -1)
        {
            cout << "Cant't delete element ";
            return;
        }

        front++;
    }
    int empty()
    {
        if (front == -1 || front > back)
        {
            return -1;
        }
        return 1;
    }
};
int main()
{
    check p;
    p.push(23);
    p.push(343);
    cout << p.peek();
    cout << p.peek();
    cout << p.empty();
    return 0;
}
