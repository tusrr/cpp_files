#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int s = 0;
    int e = size - 1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] < key)
        {
            s = mid + 1;
            // go right wala part
        }
        else
        {
            e = mid - 1;
            // go left wala part
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{

    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6, 12);
    cout << "Index of 12 is :" << evenIndex << endl;

    cout << "Index of 12 is :" << binarySearch(odd, 6, 12) << endl;
    cout << "Index of 3 is :" << binarySearch(odd, 5, 3) << endl;
    return 0;
}