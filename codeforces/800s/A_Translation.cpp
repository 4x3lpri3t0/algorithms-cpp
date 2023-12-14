// https://codeforces.com/problemset/problem/41/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    string s, t;
    cin >> s >> t;

    reverse(s.begin(), s.end());

    cout << (s == t ? "YES" : "NO");
}