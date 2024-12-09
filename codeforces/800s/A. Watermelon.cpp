// https://codeforces.com/problemset/problem/4/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    if (n > 2 && n % 2 == 0)
        cout << "YES";
    else
        cout << "NO";
}