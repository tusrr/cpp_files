#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{

    int arr[5] = {3, 8, 10, 17, 1};
    int nums[6] = {1, 7, 3, 6, 5, 6};

    cout << getPivot(arr, 5);
    cout << getPivot(nums, 6);

    return 0;
}