// https://codeforces.com/problemset/problem/1/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    
    long long n, m, a;
    cin >> n >> m >> a;

    long long x = (n + a - 1) / a; // Similar to ceil(n / a)
    long long y = (m + a - 1) / a; // Similar to ceil(m / a)
    cout << x * y << endl;
}