// https://codeforces.com/problemset/problem/336/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int get_sign(int x) {
    if (x > 0) return 1;
    if (x == 0) return 0;
    return -1;
}

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y;
    scanf("%d %d", &x, &y);

    int v = abs(x) + abs(y);
    pair<int, int> f = make_pair(v * get_sign(x), 0);
    pair<int, int> s = make_pair(0, v * get_sign(y));
    if (f.first > s.first)
        swap(f, s);

    printf("%d %d %d %d", f.first, f.second, s.first, s.second);
}

// math
// !
// https://codeforces.com/blog/entry/8574