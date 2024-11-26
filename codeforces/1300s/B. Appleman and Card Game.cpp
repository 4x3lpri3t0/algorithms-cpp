// https://codeforces.com/problemset/problem/462/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    string s;
    cin >> n >> k >> s;

    int freq[26];
    memset(freq, 0, sizeof(freq));
    for (int i = 0; i < n; i++)
        freq[s[i] - 'A']++;

    sort(freq, freq + 26, greater<int>()); // desc
    int ans = 0, i = 0;
    while (k > 0)
    {
        int mn = min(freq[i], k);
        ans += (mn * mn);
        k -= mn;
        i++;
    }

    cout << ans;
}

// greedy