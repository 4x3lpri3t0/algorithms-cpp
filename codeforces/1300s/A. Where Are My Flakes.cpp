// https://codeforces.com/problemset/problem/60/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    string _, t;
    int k, l = 1, r = n;
    while (m--)
    {
        cin >> _ >> _ >> t >> _ >> k;

        if (t == "right")
            l = max(l, k + 1);
        else
            r = min(r, k - 1);
    }

    int diff = r - l + 1;
    cout << (diff > 0 ? diff : -1);
}

// two pointers