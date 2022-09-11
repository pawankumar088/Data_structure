#include <iostream>
using namespace std;
int maxSubarrayProduct(int arr[], int n)
{
    int Max = arr[0];
    int Min = arr[0];
    int ans = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]<0){
            swap(Max, Min);
        }
        Max = max(arr[i], Max * arr[i]);
        Min = min(arr[i], Min * arr[i]);
        ans = max(ans, Max);
    }
    return ans;
}

int main()
{
    int arr[] = {2, 3, -2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum Sub array product is "
         << maxSubarrayProduct(arr, n);
    return 0;
}

/* #include <iostream>
using namespace std;
int maxSubarrayProduct(int arr[], int n)
{
    int result = arr[0];

    for (int i = 0; i < n; i++)
    {
        int mul = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            result = max(result, mul);
            mul *= arr[j];
        }
        result = max(result, mul);
    }
    return result;
}

int main()
{
    int arr[] = {6, -3, -10, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum Sub array product is "
         << maxSubarrayProduct(arr, n);
    return 0;
}

 */