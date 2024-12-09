// https://codeforces.com/contest/1915/problem/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int n)
{
    int uniqueN = 0;
    for (int i = 0; i < n; i++) {
        uniqueN ^= arr[i];
    }
    return uniqueN;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC, n;
    cin >> TC;

    while (TC-- > 0)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
            cin >> arr[i];

        cout << findUnique(arr, 3) << endl;
    }
}

// !
// bitmasks