// https://codeforces.com/problemset/problem/499/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    map<string, string> mp;
    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        mp[a] = b;
    }

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        // Output should be the shorter word
        if (mp[s].size() < s.size())
            cout << mp[s] << " ";
        else
            cout << s << " ";
    }
}

// strings