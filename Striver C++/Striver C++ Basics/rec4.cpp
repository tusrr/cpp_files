// Reverse an array using recursion

#include <iostream>
using namespace std;

// f1 -- rec using2 ptrs
void f1(int l, int a[], int r)
{
    if (l >= r)
        return;
    swap(a[l], a[r]);
    f1(l + 1, a, r - 1);
}

//  f2 -- rec using 1 ptr.

void f2(int i, int a[], int n)
{
    if (i >= n / 2)
        return;
    swap(a[i], a[n - i - 1]);
    f2(i + 1, a, n);
}

// palindrome

bool checkPalindrome(int i, string &s)
{
    if (i >= s.size() / 2)
    {
        return true;
    }
    if (s[i] != s[s.size() - i - 1])
    {
        return false;
    }
    return checkPalindrome(i + 1, s);
}

int main()
{
    int n;
    // cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // f1(0, a, n - 1);
    // f2(0, a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }

    string s = "123";
    cout << checkPalindrome(0, s);
    return 0;
}