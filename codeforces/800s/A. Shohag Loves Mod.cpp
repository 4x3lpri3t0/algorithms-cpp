// https://codeforces.com/problemset/problem/2039/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define Error {cout<<-1;return 0;}
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC;
    cin >> TC;
    while (TC--)
    {
        int n;
        cin >> n;

        int i = 1;
        while (n--)
        {
            cout << i << " ";
            i += 2;
        }
        cout << endl;
    }
}

// number theory