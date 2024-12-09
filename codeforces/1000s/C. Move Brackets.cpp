// https://codeforces.com/problemset/problem/1374/C
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC;
    cin >> TC;
    while (TC--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;

        int balance = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '(')
            {
                balance++;
            }
            else if (balance > 0) // )
            {
                balance--;
            }
            else
            {
                ans++;
            }
        }

        cout << ans << endl;
    }
}

// greedy, strings