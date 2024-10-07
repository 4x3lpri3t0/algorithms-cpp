// https://onlinejudge.org/external/117/11799.pdf
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
        int currStudentSpeed;
        int fastestStudentSpeed = 0;
        cin >> N;
        while (N--)
        {
            cin >> currStudentSpeed;
            fastestStudentSpeed = max(currStudentSpeed, fastestStudentSpeed);
        }

        printf("Case %d: %d\n", round++, fastestStudentSpeed);
    }
}