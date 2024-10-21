// https://codeforces.com/problemset/problem/151/A
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drinkPortions = (k * l) / nl;
    int slicePortions = c * d;
    int saltPortions = p / np;

    cout << (min(min(drinkPortions, slicePortions), saltPortions) / n);
}