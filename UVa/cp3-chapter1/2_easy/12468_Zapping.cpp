// https://onlinejudge.org/external/124/12468.pdf
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int a, b;

    while (cin >> a >> b)
    {
        if (a == -1 && b == -1)
            break;

        int clockwise = abs(a - b);
        int counterClockwise = 100 - clockwise;

        cout << min(clockwise, counterClockwise) << endl;
    }
}