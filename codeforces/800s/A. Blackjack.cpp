// https://codeforces.com/problemset/problem/104/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define Error {cout<<-1;return 0;}
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    n -= 10; // Already got queen of spades

    if (n == 10)
        cout << 15;
    else if (n <= 0 || n > 11)
        cout << 0;
    else
        cout << 4;
}