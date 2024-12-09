// https://codeforces.com/problemset/problem/116/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int maxPass = 0, ongoingPass = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;

        ongoingPass -= a;
        ongoingPass += b;
        maxPass = max(maxPass, ongoingPass);
    }

    cout << maxPass;
}