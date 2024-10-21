// https://codeforces.com/problemset/problem/224/A
#include <bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    int aLength = sqrt(a * b / c);
    int bLength = sqrt(b * c / a);
    int cLength = sqrt(c * a / b);

    cout << 4 * (aLength + bLength + cLength);
}