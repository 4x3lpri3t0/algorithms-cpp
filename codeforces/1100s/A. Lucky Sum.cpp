// https://codeforces.com/problemset/problem/121/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> lucky_numbers;

// Function to generate all lucky numbers recursively
void generate_lucky_numbers(int num, int limit) {
    if (num > limit)
        return;
    if (num > 0)
        lucky_numbers.push_back(num);

    generate_lucky_numbers(num * 10 + 4, limit);
    generate_lucky_numbers(num * 10 + 7, limit);
}

main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int l, r;
    cin >> l >> r;

    // Precompute lucky numbers up to 10^10
    generate_lucky_numbers(0, 1e10);
    sort(lucky_numbers.begin(), lucky_numbers.end());

    // Calculate the sum of lucky numbers in range [l, r]
    int ans = 0;
    int current = l;

    for (int lucky : lucky_numbers)
    {
        if (current > r)
            break;
        if (lucky >= current)
        {
            // Add the contribution of the current range
            ans += lucky * (min(r, lucky) - current + 1);
            current = lucky + 1;
        }
    }

    cout << ans << '\n';
}

// !