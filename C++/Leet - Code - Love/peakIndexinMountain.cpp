#include <iostream>
using namespace std;

int peakIndex(int arr[], int size)
{

    int s = 0;
    int e = size - 1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
            // go right wala part
        }
        else if (arr[mid] > arr[mid + 1])
        {
            e = mid - 1;
            // go left wala part
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
    int arr[8] = {0, 2, 4, 78, 53, 36, 1, 0};
    cout << peakIndex(arr, 4);
    return 0;
}