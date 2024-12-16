// 
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define Error {cout<<-1;return 0;}
#define int long long
using namespace std;

void solve()
{
    string s1;
    cin >> s1;

    string s2 = s1;
    reverse(s2.begin(), s2.end());

    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i] == 'q')
            s2[i] = 'p';
        else if (s2[i] == 'p')
            s2[i] = 'q';
    }

    cout << s2 << endl;
}

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int TC;
    cin >> TC;
    while (TC--)
        solve();
}