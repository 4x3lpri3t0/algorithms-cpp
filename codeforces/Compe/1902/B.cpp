// https://codeforces.com/contest/1902/problem/B
#include <bits/stdc++.h>

#define int long long

using namespace std;

int32_t main()
{
    ios::sync_with_stdio(0);
    int T;
    cin >> T;

    while ( T-- > 0 )
    {
        int n, P, l, t; // earn at least P points during those n days
        cin >> n >> P >> l >> t;
        
        int weeklyPoints = t + l;
        int weeks = n / 7;

        while ( weeks > 0 && P > 0 )
        {
            n--;
            weeks--;
            P -= weeklyPoints;
        }

        while ( n > 0 && P > 0 )
        {
            n--;
            P -= l;
        }

        cout << n << endl;
    }
}