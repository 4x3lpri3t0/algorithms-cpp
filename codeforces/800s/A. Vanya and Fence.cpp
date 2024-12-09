// https://codeforces.com/problemset/problem/677/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, h;
    cin >> n >> h;

    int width = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        width += a > h ? 2 : 1;
    }

    cout << width;
}