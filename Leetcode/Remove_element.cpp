#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int removeElement(vector<int> &nums, int val)
{
    int ind = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[ind] = nums[i];
            ind++;
        }
    }
    return ind;
}
int main()
{
    int n;
    string s;
    vector<int>arr={1, 2, 3, 4, 5};
    removeElement(arr, 3);
    return 0;
}
