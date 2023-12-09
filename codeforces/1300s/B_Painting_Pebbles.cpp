// https://codeforces.com/problemset/problem/509/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a[n];
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mini = min(mini, a[i]);
        maxi = max(maxi, a[i]);
    }

    if (maxi - mini > k)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < a[i]; j++)
            {
                cout << (j % k) + 1 << " ";
            }

            cout << endl;
        }
    }
}