// https://codeforces.com/problemset/problem/734/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define Error {cout<<-1;return 0;}
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, a = 0, d = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            a++;
        else
            d++;
    }

    if (a == d)
        cout << "Friendship";
    else if (a > d)
        cout << "Anton";
    else
        cout << "Danik";
}