#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // pre-compute

    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;
        // fetch
        cout << mpp[num] << endl;
    }

    return 0;
}

// The pre-computation can be done in the upper for loop
//  while taking user input of array nums as both goes equally
// N+N (TC)=> 2N => ~N(Constant will be ignored)