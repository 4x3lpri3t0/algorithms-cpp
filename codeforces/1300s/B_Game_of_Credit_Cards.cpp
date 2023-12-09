// https://codeforces.com/problemset/problem/777/B
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int n;
    string S, M;
    cin >> n >> S >> M;

    // Sort both DESC
    sort(S.begin(), S.end(), greater<int>());
    sort(M.begin(), M.end(), greater<int>());

    // Accum if s2[i] < s1[i]
    int flicksReceived = 0;
    int maxIdx = 0;
    for (int i = 0; i < n; i++)
    {
        if (M[maxIdx] >= S[i])
        {
            maxIdx++;
        }
        else
        {
            flicksReceived++;
        }
    }

    cout << flicksReceived << "\n";

    int flicksGiven = 0;
    maxIdx = 0;

    for (int i = 0; i < n; i++)
    {
        if (M[maxIdx] > S[i])
        {
            flicksGiven++;
            maxIdx++;
        }
    }

    cout << flicksGiven;
}