#include <iostream>
#include <algorithm>
#define n 30
using namespace std;
class pawan
{
    int *arr;
    int front;
    int back;

public:
    pawan()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue overflow" << endl;
            return;
        }
        back++;
        arr[back] = x;
        if (front == -1)
        {
            front++;
        }
    }
    void pop()
    {
        if (front == -1 or front > back)
        {
            cout << "No element in queue" << endl;
            return;
        }
        front++;
    }
    int peek()
    {
        if (front == -1 or front > back)
        {
            cout << "No element is Queue" << endl;
            return -1;
        }
        return arr[front];
    }
    bool empty()
    {
        if (front == -1 or front > back)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    pawan q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    cout << q.peek();
    return 0;
}
