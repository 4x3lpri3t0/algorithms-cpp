// https://codeforces.com/problemset/problem/1097/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

vector<int> a;
int n;

bool isZero(int idx, int accum)
{
    idx++;
    if (idx >= n)
    {
        if (accum % 360 == 0)
            return true;
        else
            return false;
    }

    return isZero(idx, accum + a[idx]) || isZero(idx, accum - a[idx]);
}

main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        a.push_back(input);
    }

    cout << (isZero(-1, 0) ? "YES" : "NO");
}

// dp