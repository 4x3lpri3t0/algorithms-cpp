// https://onlinejudge.org/external/116/11679.pdf
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    ios::sync_with_stdio(0);
    int B, N;
    cin >> B >> N;

    while (B != 0)
    {
        int bankReserves[B];
        for (int i = 0; i < B; i++)
            cin >> bankReserves[i];

        int fromBank, toBank, V;

        for (int i = 0; i < N; i++)
        {
            cin >> fromBank >> toBank >> V;

            bankReserves[fromBank - 1] -= V;
            bankReserves[toBank - 1] += V;
        }

        int possibleToLiquidateAll = true;
        for (int i = 0; i < B; i++)
        {
            if (bankReserves[i] < 0)
            {
                possibleToLiquidateAll = false;
                break;
            }
        }

        if (possibleToLiquidateAll)
            cout << "S" << endl;
        else
            cout << "N" << endl;

        cin >> B >> N;
    }
}