// https://codeforces.com/problemset/problem/124/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, a, b;

    cin >> n >> a >> b;

    cout << min(n - a, b + 1);
}