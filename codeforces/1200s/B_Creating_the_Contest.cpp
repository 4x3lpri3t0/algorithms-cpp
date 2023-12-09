// https://codeforces.com/problemset/problem/1029/B
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int n;
    cin >> n;

    int input;
    vector<int> a;
    while (cin >> input)
        a.push_back(input);

    int maxSeq = 1;
    int curSeq = 1;

    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] <= a[i - 1] * 2)
            curSeq++;
        else
            curSeq = 1;

        maxSeq = max(curSeq, maxSeq);
    }

    cout << maxSeq;
}