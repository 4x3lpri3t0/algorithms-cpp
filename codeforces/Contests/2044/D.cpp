// 
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a[n], b[n], j = 0;
    set<int> seen;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (!seen.contains(a[i]))
        {
            b[j] = a[i];
            j++;
            seen.insert(a[i]);
        }
    }

    stack<int> notseen;
    for (int i = 1; i <= n; i++)
    {
        if (!seen.contains(i))
            notseen.push(i);
    }

    for (int i = j; i < n; i++)
    {
        b[i] = notseen.top();
        notseen.pop();
    }

    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
    cout << endl;
}

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int TC;
    cin >> TC;
    while (TC--)
        solve();
}