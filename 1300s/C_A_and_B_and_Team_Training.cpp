#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/519/C
int main()
{
    ios::sync_with_stdio(0);
    int a, b;
    cin >> a >> b;

    if (max(a, b) >= 2 * min(a, b))
        cout << min(a, b);
    else
        cout << (a + b) / 3;
}