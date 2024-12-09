// https://codeforces.com/problemset/problem/476/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    // Minimum moves required if Dreamoon takes as many 2-steps as possible.
    int minMoves = (n + 1) / 2;  // This is equivalent to ceil(n/2)

    // Finding the first number greater than or equal to minMoves that is a multiple of m.
    while (minMoves % m != 0 && minMoves <= n) {
        minMoves++;
    }

    // If we exceed n steps, it's not possible to satisfy the conditions
    if (minMoves > n) {
        cout << -1 << endl;
    }
    else {
        cout << minMoves << endl;
    }

    return 0;

}

// math

// TODO: Review