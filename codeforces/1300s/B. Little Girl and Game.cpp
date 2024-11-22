// https://codeforces.com/problemset/problem/276/B
#include <bits/stdc++.h>
using namespace std;

string str;

int main()
{
    ios::sync_with_stdio(0);

    cin >> str;

    int a[26];
    memset(a, 0, sizeof(a));

    // Letter frequency
    for (char c : str)
        a[c - 'a']++;

    // Count odds
    int odds = 0;
    for (int v : a)
        if (v % 2 != 0)
            odds++;

    // 1. String doesn't consist only of evens
    // 2. Even number of odds
    cout << (odds > 0 && odds % 2 == 0 ? "Second" : "First");
}

// games
// greedy