// https://codeforces.com/problemset/problem/266/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, t;
    cin >> n >> t;

    string queue;
    cin >> queue;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < queue.length() - 1; j++)
        {
            if (queue[j] == 'B' && queue[j + 1] == 'G')
            {
                swap(queue[j], queue[j + 1]);
                j++;
            }
        }
    }

    cout << queue;
}