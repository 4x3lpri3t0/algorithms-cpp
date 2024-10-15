// https://onlinejudge.org/external/120/12015.pdf
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int T;
    cin >> T;
    int round = 1;

    while (T--)
    {
        string url[10];
        int relevance[10];
        int maxRelevance = 0;
        for (int i = 0; i < 10; i++)
        {
            cin >> url[i] >> relevance[i];
            maxRelevance = max(maxRelevance, relevance[i]);
        }

        cout << "Case #" << round++ << ":" << endl;
        for (int i = 0; i < 10; i++)
        {
            if (relevance[i] == maxRelevance)
                cout << url[i] << endl;
        }
    }
}