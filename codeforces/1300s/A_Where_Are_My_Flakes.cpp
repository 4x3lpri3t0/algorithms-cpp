// https://codeforces.com/problemset/problem/60/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int l = 1, r = n;

    string _, t;
    int k;
    while (m--)
    {
        cin >> _ >> _ >> t >> _ >> k;

        if (t == "right")
            l = max(l, k + 1);
        else
            r = min(r, k - 1);
    }

    cout << (r - l + 1 > 0 ? r - l + 1 : -1);
}