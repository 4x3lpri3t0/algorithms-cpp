// https://codeforces.com/problemset/problem/379/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    
    int a, b;
    cin >> a >> b;
    
    int ans = a;
    while (a >= b) {
        ans += a / b;
        a = a / b + a % b;
    }

    cout << ans;
}

// implementation