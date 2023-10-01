#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // row me move

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        break;
    }

    // colm me move

    for (int j = 2; j >= 0; j--)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << arr[i][j];
        }
        break;
    }

    // row me move

    for (int i = 2; i < 3; i++)
    {
        for (int j = 1; j >= 0; j--)
        {
            cout << arr[i][j] << " ";
        }
        break;
    }

    for (int j = 2; j >= 0; j--)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << arr[i][j];
        }
        break;
    }

    return 0;
}
