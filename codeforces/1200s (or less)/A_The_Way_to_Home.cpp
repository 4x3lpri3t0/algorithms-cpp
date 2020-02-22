#include <bits/stdc++.h>
#define int long long
using namespace std;

// https://codeforces.com/problemset/problem/910/A
int32_t main()
{
    int n, d;
    string s;
    cin >> n >> d >> s;

    int ans = 0, cur = 0;
    while (cur != n - 1)
    {
        bool fl = false;
        for (int i = min(cur + d, n - 1); i > cur; i--)
        {
            if (s[i] == '1')
            {
                fl = true;
                cur = i;
                ans++;
                break;
            }
        }
        if (!fl)
        {
            cout << -1;
            return 0;
        }
    }

    cout << ans;
}