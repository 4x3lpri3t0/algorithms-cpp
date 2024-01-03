// https://codeforces.com/problemset/problem/479/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    
    int a, b, c;
    cin >> a >> b >> c;
    
    int ans = 0;
    ans = max(ans, a + b + c);
    ans = max(ans, a * b * c);
    ans = max(ans, a * b + c);
    ans = max(ans, a + b * c);
    ans = max(ans, (a + b) * c);
    ans = max(ans, a * (b + c));

    cout << ans << endl;
}