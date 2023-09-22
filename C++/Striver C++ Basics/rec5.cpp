#include <iostream>
using namespace std;
// concept of multiple recursion
// find nth fibonacci number [0 1 1 2 3 5 8 13 21]
int f(int n)
{
    if (n <= 1)
        return n;
    int last = f(n - 1);
    int slast = f(n - 2);
    return last + slast;
}

int main()
{
    cout << f(4) << endl;
    cout << f(6);
    return 0;
}

// tc: exponential (~2^n): for every n , we call two elements