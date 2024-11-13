// https://codeforces.com/problemset/problem/96/A
#include <bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string input;
    cin >> input;

    size_t found1 = input.find("1111111");
    size_t found2 = input.find("0000000");
    if (found1 != string::npos || found2 != string::npos)
        cout << "YES";
    else
        cout << "NO";
}

// strings