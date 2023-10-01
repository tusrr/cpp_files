#include <iostream>
using namespace std;

char getMaxCharOcc(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        // mapping num and characters
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z')
        {
            int val = ch - 'a';
            arr[val]++;
        }
        else
        {
            int val = ch - 'A';
            arr[val]++;
        }
    }

    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;

            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}

int main()
{

    string s;
    cin >> s;
    cout << "max occuring char is : " << getMaxCharOcc(s);

    return 0;
}