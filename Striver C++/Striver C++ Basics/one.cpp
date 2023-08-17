#include <iostream>
using namespace std;

void printName(string name)
{
    cout << "Hey " << name << "\n";
}

int sum(int a, int b)
{
    return a + b;
}

int maxi(int num1, int num2)
{
    if (num1 >= num2)
    {
        return num1; // doesnt execute this line
        // else
        //     return num2;
    }
    return num2; // So, looks for a return type - if it doesnt find a return statement ..as per the if condtn then it will throw garbage value
}

void doSomething(string &s) // If & is not used before s, hence address is not passed --(PASS BY VALUE) -- doesn't change original s
{
    s[0] = 'T';
    cout << s << "\n";
}

void doSomethingArr(int arr[], int n)
{
    arr[0] += 100;
    cout << "Value inside fn : " << arr[0] << "\n";
}

int main()
{
    // cout << "Tushar\nSonu\n";

    // string str;
    // getline(cin, str);
    // cout << str;

    // string b = "Tushar";
    // cout << b[3];
    // int len = b.size();
    // cout << len;
    // cout << b[len - 1];         // prints the last character of the string
    // // b[len - 1] = "xyz"; -- Throws error bcoz b[location] is a character despite b is a string declared!
    // b[len - 1] = 'R';
    // cout << b;

    // string name;
    // cin >> name;

    // printName(name);

    // string name2;
    // cin >> name2;

    // printName(name2);

    // cout << sum(2, 5) << "\n";
    // cout << sum(2, 15) << "\n";

    // cout << maxi(7, 38) << "\n";
    // cout << maxi(7, 38) << "\n";

    // string s = "Raj";
    // doSomething(s);
    // cout << s << "\n";

    // Arrays are always passed by reference

    int n = 5;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // input given at arr[0] from terminal is 5
    }

    doSomethingArr(arr, n);
    cout << "Value inside fn : " << arr[0] << "\n";

    return 0;
}