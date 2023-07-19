// https://onlinejudge.org/external/121/12157.pdf
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int T, N;
    cin >> T;
    int round = 1;

    while (T--)
    {
        cin >> N;
        int juiceCost = 0;
        int mileCost = 0;

        for (size_t i = 0; i < N; i++)
        {
            int minutes;
            cin >> minutes;
            mileCost += (minutes / 30) * 10 + 10;
            juiceCost += (minutes / 60) * 15 + 15;
        }

        if (juiceCost < mileCost)
            printf("Case %d: Juice %d\n", round++, juiceCost);
        else if (juiceCost > mileCost)
            printf("Case %d: Mile %d\n", round++, mileCost);
        else // Equal
            printf("Case %d: Mile Juice %d\n", round++, mileCost);
    }
}