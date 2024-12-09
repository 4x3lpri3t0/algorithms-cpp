// https://codeforces.com/problemset/problem/230/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> dragons(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dragons[i].first >> dragons[i].second;
    }

    sort(dragons.begin(), dragons.end());

    for (int i = 0; i < n; i++)
    {
        if (s > dragons[i].first)
        {
            s += dragons[i].second;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}