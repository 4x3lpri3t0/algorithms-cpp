// https://codeforces.com/problemset/problem/158/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n, k;
    cin >> n >> k;

    vector<int> scores(n);
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }

    int ans = 0;
    int kthScore = scores[k - 1];
    for (int i = 0; i < n; i++)
    {
        if (scores[i] >= kthScore && scores[i] > 0)
        {
            ans++;
        }
        else
        {
            break;
        }
    }

    cout << ans;
}