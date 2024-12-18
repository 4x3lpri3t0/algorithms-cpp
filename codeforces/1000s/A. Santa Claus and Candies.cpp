// https://codeforces.com/contest/753/problem/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> ans;
    cin >> n;

    // Why 45? Triangular sum of 45 is 1035 (https://www.mathgoodies.com/calculators/triangular-numbers), and (1 ≤ n ≤ 1000)
    for (int i = 1; i <= 45; i++)
    {
        if (i <= n)
        {
            ans.push_back(i);
            n -= i;
        }
    }

    ans.back() += n; // Add leftover to last (biggest) element

    cout << ans.size() << endl;

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}