// https://codeforces.com/contest/1902/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int T, n;
    cin >> T;

    while ( T-- > 0)
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

        cout << ( hasAtLeastOneZero ? "YES" : "NO" ) << endl;
    }
}