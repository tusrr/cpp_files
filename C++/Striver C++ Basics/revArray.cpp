#include <iostream>
using namespace std;

int main()
{

    // reverse an array

    int arr[4] = {3, 42, 2, 4};

    for (int i = 3; i >= 0; i--)
    {
        cout << arr[i] << ",";
    }
    return 0;
}