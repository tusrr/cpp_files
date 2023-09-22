#include <iostream>
using namespace std;

int arr[3];
// void print(int n)
// {

// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < n - i; j++)
//     {
//         cout << "* ";
//     }
//     cout << endl;
// }

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n + 1 - i; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
// }

int main()
{

    // int arr[] = {12, 345, 2, 6, 7896};
    // int dup[] = {12, 345, 2, 6, 7896};
    // int x = sizeof(arr) / sizeof(arr[0]);

    // for (int i = 0; i < x; i++)
    // {
    //     int cnt = 0;
    //     while (arr[i] != 0)
    //     {
    //         arr[i] /= 10;
    //         cnt++;
    //     }
    //     // cout << cnt<<endl;
    //     if (cnt % 2 == 0)
    //         // cout << i << endl;
    //         cout << dup[i] << endl;
    // }

        for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}

// int x = 6;
// x = x + x;
// cout << x;

// float var = .1;
// var = var + 1.;
// var = var + 1e1;
// var = var + 1e-2;
// cout << var;

// int n;
// cin >> n;
// print(n);
// for (int i = 1; i <= 2 * n - 1; i++)
// {
//     int stars = i;
//     if (i > n)
//     {
//         stars = 2 * n - i;
//     }

//     for (int j = 1; j <= stars; j++)
//     {
//         cout << "* ";
//     }
//     cout << "\n ";
// }

// fibonacci series
// int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
// for (int i = 0; i <= 10; i++)
// {
//     cout << arr[i] + arr[i + 1] << ",";
// }

// reverse a number & valid palindrome check

// int a = 1331;
// int dup = a;
// int revNum = 0;
// while (a != 0)
// {
//     int digits = a % 10;
//     a = a / 10;
//     // cout << digits;

//     revNum = revNum * 10 + digits;
// }
// cout << revNum << endl;
// if (revNum == dup)
// {
//     cout << "Valid palindrome" << endl;
// }
// else
// {
//     cout << "Invalid palindrome" << endl;
// }

// Return the array with even number of digits