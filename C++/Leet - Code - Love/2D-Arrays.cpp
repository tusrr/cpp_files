#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int i, int j)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

void printRowSum(int arr[][4], int i, int j)
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}
void printColSum(int arr[][4], int i, int j)
{
    for (int j = 0; j < 4; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

int largestRowSum(int arr[][3], int i, int j)
{
    int maxi = INT_MIN;
    int largestRowIndex = -1;

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }

        if (sum > maxi)
        {
            maxi = sum;
            largestRowIndex = i;
        }
    }
    cout << "max sum is: " << maxi << endl;
    return largestRowIndex;
}

int largestRowSum(int arr[][4], int i, int j)
{
    int maxi = INT_MIN;
    int largestRowIndex = -1;

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }

        if (sum > maxi)
        {
            maxi = sum;
            largestRowIndex = i;
        }
    }
    cout << "max sum is: " << maxi << endl;
    return largestRowIndex;
}

int main()
{

    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};
    // taking input row-wise

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // taking input column-wise

    // for (int col = 0; col < 4; col++)
    // {
    //     for (int row = 0; row < 3; row++)
    //     {
    //         cin >> arr[row][col];
    //     }
    // }

    // print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // cout << "Enter the elem to search" << endl;
    // int target;
    // cin >> target;

    // if (isPresent(arr, target, 3, 4))
    // {
    //     cout << "Element found" << endl;
    // }
    // else
    // {
    //     cout << "Element not found" << endl;
    // }

    // "------ROW-WISE SUM-----"

    // cout << "ROW-WISE SUM is: ";
    // printRowSum(arr, 3, 4);
    // cout << "col-WISE SUM is: ";
    // printColSum(arr, 3, 4);

    int reqIndex = largestRowSum(arr, 3, 3); //  -- ye statement v same line print krega
    // qki yaha se fn call lene k baad...upr fn defn ke params me column size defined(default) hai..so it
    // that will over-ride the existing index u passed here...but passing is mandatory else
    // it wont identify which fn to call
    cout << "Max largest Row Sum is at index" << reqIndex << endl;

    int newArr[3][3] = {3, 4, 11, 22, 12, 1, 7, 8, 7};
    int reqIndex2 = largestRowSum(newArr, 3, 3);
    cout << "Max largest Row Sum is at index " << reqIndex2 << endl;
    return 0;
}