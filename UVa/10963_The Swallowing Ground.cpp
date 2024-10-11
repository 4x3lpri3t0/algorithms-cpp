// https://onlinejudge.org/external/109/10963.pdf
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int TC, W, y1, y2;
    scanf("%d", &TC);

    while (TC--)
    {
        bool canCloseGap = true;
        int diff = -1;
        scanf("%d", &W);
        while (W--)
        {
            scanf("%d %d", &y1, &y2);

            int currDiff = abs(y1 - y2);
            if (diff == -1)
            {
                diff = currDiff;
            }
            else if (diff != currDiff)
            {
                canCloseGap = false;
            }
        }
        if (canCloseGap)
            printf("yes\n");
        else
            printf("no\n");

        if (TC)
            printf("\n");
    }
}