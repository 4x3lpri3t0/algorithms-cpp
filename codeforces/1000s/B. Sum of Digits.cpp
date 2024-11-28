// https://codeforces.com/problemset/problem/102/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string n;
    cin >> n;
    int ans = 0;
    while (n.length() > 1) {
        int a = 0;
        for (int i = 0; i < n.length(); i++)
            a += (n[i] - '0');
        n = to_string(a);
        ans++;
    }
    cout << ans << endl;
}

// !