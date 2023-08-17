#include <bits/stdc++.h>
using namespace std;

void printPattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void printPattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void printPattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

void printPattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}

void printPattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void printPattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void printPattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void printPattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void printPattern10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }

        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void printPattern11(int n)
{
    for (int i = 0; i < n; i++)
    {
        int start = 1;
        if (i % 2 != 0)
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void printPattern12(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

void printPattern13(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}

void printPattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void printPattern15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + n - i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void printPattern16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void printPattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // character
        char ch = 'A';
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;
            ch++;
        }

        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void printPattern17_main(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // character
        char ch = 'A';
        int breakpt = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= breakpt)
                ch++;
            else
                ch--;
        }

        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void printPattern18(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void printPattern19(int n)
{
    int iniS = 0;
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }
        // space
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }
        iniS += 2;
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    // printPattern1(n);
    // printPattern2(n);
    // printPattern3(n);
    // printPattern4(n);

    // printPattern5(n);
    // printPattern6(n);
    // printPattern7(n);
    // printPattern8(n);
    // printPattern9(n); : is the sum of 7 and 8 !
    // printPattern10(n);
    // printPattern11(n);
    // printPattern12(n); ------ TO REVISIT
    // printPattern13(n);
    // printPattern14(n);
    // printPattern15(n);
    // printPattern16(n);
    // printPattern17(n);
    // printPattern17_main(n);
    // printPattern18(n);
    printPattern19(n);

    return 0;
}