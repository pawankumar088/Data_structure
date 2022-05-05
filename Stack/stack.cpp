#include <bits/stdc++.h>
using namespace std;
#define n 30
class pawan
{

    int *arr;
    int top;

public:
    pawan()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack overFlow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "No elemetn to pop" << endl;
            return;
        }
        top--;
    }
    bool empty()
    {
        return top == -1;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "No element to display";
            return -1;
        }
        return arr[top];
    }
};

int main()
{
    pawan st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(5);
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;

    return 0;
}
