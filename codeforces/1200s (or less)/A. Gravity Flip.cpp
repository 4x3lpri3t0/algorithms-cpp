#include <bits/stdc++.h>
#define int long long
using namespace std;

// https://codeforces.com/problemset/problem/405/A
int32_t main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}