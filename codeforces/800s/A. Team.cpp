// https://codeforces.com/problemset/problem/231/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC, ans = 0;
    cin >> TC;
    while (TC--)
    {
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            int input;
            cin >> input;
            count += input;
        }

        if (count >= 2)
            ans++;
    }

    cout << ans;
}