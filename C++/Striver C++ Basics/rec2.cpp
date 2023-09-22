#include <iostream>
using namespace std;

// Printing name n times using recursion
int i;
void printName()
{
    if (i == 5)
        return;
    cout << "Tushar" << endl;
    i++;
    printName();
}

void f(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "Sonu" << endl;
    f(i + 1, n);
}

// printing linearly from 1 to n

void count(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    count(i + 1, n);
}

// printing linearly from n to 1

void countReverse(int i, int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    countReverse(i, n - 1);
}

// print 1 to n and n to 1  using backtracking
void count2(int i, int n)
{
    if (i < 1)
        return;
    count2(i - 1, n);
    cout << i << endl;
}

void countReverse2(int i, int n)
{
    if (n == 0)
        return;
    countReverse2(i + 1, n - 1);
    cout << i << endl;
}

int main()
{
    printName();
    int n;
    cin >> n;
    f(1, n);
    count(1, n);
    countReverse(1, 5);
    count2(3, 3);
    countReverse2(1, 7);

    return 0;
}