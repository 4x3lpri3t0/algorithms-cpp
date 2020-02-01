#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/732/B
int32_t main()
{
    int n, k;
    cin >> n >> k;

    int input;
    vector<int> a;
    while (cin >> input)
        a.push_back(input);

    int total = 0;
    for (int i = 1; i < n; i++)
    {
        int add = std::max(0, k - (a[i] + a[i - 1]));
        total += add;
        a[i] += add;
    }

    cout << total << '\n';
    for (auto i : a)
        cout << i << ' ';
}