// https://codeforces.com/problemset/problem/71/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC;
    string str;
    cin >> TC;

    while (TC-- > 0)
    {
        cin >> str;
        int len = str.length();
        if (len < 11)
            cout << str << endl;
        else
            cout << str[0] << len - 2 << str[len - 1] << endl;
    }
}