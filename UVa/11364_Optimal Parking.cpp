// https://onlinejudge.org/external/113/11364.pdf
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    int n;
    while (T--)
    {
        int n;
        cin >> n;

        int minN(100), maxN(0), temp;
        while (n--)
        {
            int x;
            cin >> x;
            maxN = max(maxN, x);
            minN = min(minN, x);
        }

        std::cout << 2 * (maxN - minN) << '\n';
    }
}