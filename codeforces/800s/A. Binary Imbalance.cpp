// https://codeforces.com/contest/1902/problem/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC, n;
    cin >> TC;
    while (TC--)
    {
        cin >> n;
        bool hasAtLeastOneZero = false;
        string input = "";
        cin >> input;

        for (int i = 0; i < n; i++)
        {
            if (input[i] == '0')
            {
                hasAtLeastOneZero = true;
            }
        }

        cout << (hasAtLeastOneZero ? "YES" : "NO") << endl;
    }
}