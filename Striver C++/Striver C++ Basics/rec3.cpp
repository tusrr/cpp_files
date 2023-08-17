#include <iostream>
using namespace std;

// sum of first n number using recursion
// parameterised
void add(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    add(i - 1, sum + i);
}
// functional - params dont work..we want t return from the fn instead

int f(int n)
{
    if (n == 0)
        return 0;
    return n + f(n - 1);
}

// sum of first n numbers(fib)-- functional

int fib(int n)
{
    if (n == 0)
        return 1;
    return n * fib(n - 1);
}

int main()
{
    int n;
    cin >> n;
    add(n, 0);

    cout << f(n) << endl;
    cout << fib(n) << endl;
    return 0;
}