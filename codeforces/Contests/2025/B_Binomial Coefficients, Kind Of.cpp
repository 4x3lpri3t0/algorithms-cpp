// https://codeforces.com/contest/2025/problem/B
// https://codeforces.com/blog/entry/135173
#include <bits/stdc++.h>
using namespace std;

const int MOD = int(1e9) + 7;

main()
{
    int t;
    cin >> t;
    vector<int> ks(t);
    // The first line of n-values is ignored in the context of this problem (only depends on the k-values)
    for (int _ = 0; _ < 2; _++)
        for (int i = 0; i < t; i++)
            cin >> ks[i];

    // Precompute powers of two
    vector<int> ans(1 + *max_element(ks.begin(), ks.end()), 1);
    for (int i = 1; i < (int)ans.size(); i++)
        ans[i] = (2LL * ans[i - 1]) % MOD;

    // Output
    for (int k : ks)
        cout << ans[k] << '\n';
}