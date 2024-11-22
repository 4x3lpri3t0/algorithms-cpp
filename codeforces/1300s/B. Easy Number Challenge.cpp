// https://codeforces.com/problemset/problem/236/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1073741824;

int divisor_count(int n)
{
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++; // Count the divisor i
            if (i != n / i) // Exclude sqrt of n (e.g. n = 36, 6 * 6 is just one pair)
                count++; // Count the corresponding pair n/i
        }
    }
    return count;
}

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    // Use a map to store the divisor count of products i * j * k
    unordered_map<int, int> freq;
    int maxn = a * b * c;

    // All possible combinations of i, j, k
    for (int i = 1; i <= a; i++)
        for (int j = 1; j <= b; j++)
            for (int k = 1; k <= c; k++)
                freq[i * j * k]++; // Store the frequency of the product

    // Calculate products stored in freq map
    int ans = 0;
    for (auto& entry : freq)
    {
        int product = entry.first;
        int product_freq = entry.second;

        int divs = divisor_count(product); // Get the number of divisors of the product
        ans = (ans + divs * product_freq) % MOD;
    }

    cout << ans;
}

// number theory
// !