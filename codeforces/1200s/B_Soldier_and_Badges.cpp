// https://codeforces.com/problemset/problem/546/B
// TODO: Implement better version -> https://codeforces.com/contest/546/submission/11206545
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    ios::sync_with_stdio(0);
    int n;
    cin >> n;

    int a[n];
    bool seen[n * 2] = {false};
    // Iterate and set to true the ones seen // TODO: Bitset?
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        seen[a[i] - 1] = true;
    }

    sort(a, a + n);

    int totalDiff = 0;

    // Accum differences and repeat:

    // Iterate , when a repeated value appears, get min from set and do B - A to get diff

    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            int pointer = a[i];
            while (true)
            {
                if (!seen[pointer])
                {
                    seen[pointer] = true;
                    totalDiff += ((pointer + 1) - a[i]);
                    break;
                }
                pointer++;
            }
        }
    }

    cout << totalDiff;
}