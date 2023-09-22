#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key)
{

    int s = 0;
    int e = size - 1;
    int ans = -1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] < key)
        {
            s = mid + 1;
            // go right wala part
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
            // go left wala part
        }
        else
        {
            ans = mid;
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int size, int key)
{

    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] < key)
        {
            s = mid + 1;
            // go right wala part
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
            // go left wala part
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    int odd[5] = {3, 8, 8, 8, 16};
    int even[7] = {2, 3, 5, 5, 5, 5, 7};

    cout << firstOcc(odd, 5, 8) << endl;
    cout << lastOcc(odd, 5, 8) << endl;

    cout << firstOcc(even, 7, 5) << endl;
    cout << lastOcc(even, 7, 5) << endl;

    return 0;
}