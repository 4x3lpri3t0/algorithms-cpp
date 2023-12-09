#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, p, l, t;
    cin >> n >> p >> l >> t;
    ll noft = (n - 1) / 7 + 1;
    ll wday = 2 * t + l;
    ll ntd = min((p - 1) / wday + 1, ((noft + 1) / 2));
    ll ptd = min(noft, ntd * 2) * t + ntd * l;

    if (p <= ptd)
        cout << n - ntd << endl;
    else
        cout << n - ntd - (p - ptd - 1) / l - 1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}