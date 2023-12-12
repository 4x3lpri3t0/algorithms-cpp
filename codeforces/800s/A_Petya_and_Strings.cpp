// https://codeforces.com/problemset/problem/112/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 32;
        if (b[i] >= 'A' && b[i] <= 'Z')
            b[i] += 32;
    }

    if (a < b)
        cout << -1;
    else if (a > b)
        cout << 1;
    else
        cout << 0;
}