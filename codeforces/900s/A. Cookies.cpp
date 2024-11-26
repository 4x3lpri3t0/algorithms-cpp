// https://codeforces.com/problemset/problem/129/A
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

    int x, odds = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 1)
            odds++;
    }

    if (odds % 2 == 1) // odd number of odds
        cout << odds;
    else
        cout << n - odds;
}