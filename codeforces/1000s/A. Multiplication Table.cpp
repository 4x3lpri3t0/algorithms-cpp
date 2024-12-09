// https://codeforces.com/problemset/problem/577/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x, ans = 0;
    cin >> n >> x;

    for (int i = 1; i <= n; i++)
    {
        if (x % i == 0 && x / i <= n)
        {
            ans++;
        }
    }

    cout << ans;
}

// number theory

// TODO: Review
// /c/9399d466-a398-4281-9438-e2fce3d02fbd