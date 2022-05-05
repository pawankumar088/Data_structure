#include <iostream>
#include <string>
using namespace std;
int main()
{

    string str = "12";
    string str1 = "12";
    int num;
    int num1;
    num = stoi(str);
    num1 = stoi(str1);
    int sum = num * num1;
    // cout << sum;
    int a = 23;
    string pawan = to_string(a);
    cout << pawan;
    return 0;
}