// https://codeforces.com/problemset/problem/58/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    string hello = "hello";
    int j = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == hello[j])
            j++;
        if (j == 5)
            break;
    }

    if (j == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}