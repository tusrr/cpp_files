#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swapAlternates(int arr[], int size)
{

    for (int i = 0; i < size; i += 2)
    {
        if ((i + 1) < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int even[8] = {5, 3, 1, 4, 7, 8, 9, 0};
    int odd[5] = {15, 33, 35, 7, 8};

    swapAlternates(even, 8);
    printArray(even, 8);

    swapAlternates(odd, 5);
    printArray(odd, 5);

    return 0;
}