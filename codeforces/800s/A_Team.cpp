// https://codeforces.com/problemset/problem/231/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int T, ans = 0;
    cin >> T;

    while ( T-- > 0)
    {
        int count = 0;

        for (int i = 0; i < 3; i++)
        {
            int input;
            cin >> input;

            count += input;
        }

        if (count >= 2)
        {
            ans++;
        }
    }

    cout << ans;
}