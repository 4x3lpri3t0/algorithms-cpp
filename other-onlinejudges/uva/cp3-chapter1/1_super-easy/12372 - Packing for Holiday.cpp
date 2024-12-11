// https://onlinejudge.org/external/123/12372.pdf
#include <bits/stdc++.h>
using namespace std;

main()
{
    int TC;
    cin >> TC;
    int L, W, H;
    int caseCounter = 1;
    while (TC--)
    {
        cin >> L >> W >> H;
        printf("Case %d: ", caseCounter);
        if (L > 20 || W > 20 || H > 20)
            printf("bad\n", caseCounter);
        else
            printf("good\n", caseCounter);

        caseCounter++;
    }
}