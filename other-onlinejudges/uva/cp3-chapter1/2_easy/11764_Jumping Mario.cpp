// https://onlinejudge.org/external/117/11764.pdf
#include <bits/stdc++.h>
using namespace std;

main()
{
    int T, N;
    cin >> T;
    int round = 1;

    while (T--)
    {
        cin >> N;
        int loJumps = 0;
        int hiJumps = 0;

        int prevHeight;
        cin >> prevHeight;
        for (int i = 1; i < N; i++)
        {
            int currHeight;
            cin >> currHeight;
            if (prevHeight < currHeight)
                hiJumps++;
            else if (prevHeight > currHeight)
                loJumps++;
            prevHeight = currHeight;
        }

        printf("Case %d: %d %d\n", round++, hiJumps, loJumps);
    }
}