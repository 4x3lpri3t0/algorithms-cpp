// https://codeforces.com/problemset/problem/1342/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int T;
    long long x, y, a, b;
    cin >> T;

    while ( T-- > 0)
    {
        long long ans = 0;

        cin >> x >> y;
        cin >> a >> b;

        b = min(b, a + a); // Case in which is cheaper to perform op 'a' twice

        if (y < x)
            swap(x, y); // Treat x as smallest value to simplify

        ans += x * b; // Diff to zero
        ans += (y - x) * a; // Diff between them

        cout << ans << endl;
    }
}

// math