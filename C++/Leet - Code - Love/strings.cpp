#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (toLowerCase(a[s]) != toLowerCase(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}
void reverseString(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != 0; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout << "enter your name " << endl;
    cin >> name;
    // name[2] = '\0';

    cout << "your name is " << name << endl;
    int len = getLength(name);
    cout << "Length is " << len << endl;
    reverseString(name, len);
    cout << "your reversed name is: " << name << endl;
    cout << "palindrome or not: " << checkPalindrome(name, len) << endl;
    cout << "character is : " << toLowerCase('b') << endl;
    cout << "character is : " << toLowerCase('C') << endl;
    return 0;
}