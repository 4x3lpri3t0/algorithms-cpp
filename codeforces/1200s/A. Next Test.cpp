// https://codeforces.com/problemset/problem/27/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define Error {cout<<-1;return 0;}
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    int next = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != next)
            break;

        next++;
    }

    cout << next;
}