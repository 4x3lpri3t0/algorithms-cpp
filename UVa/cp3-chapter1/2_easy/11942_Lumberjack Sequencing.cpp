// https://onlinejudge.org/external/119/11942.pdf
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    scanf("%d", &T);
    printf("Lumberjacks:\n");
    while (T--)
    {
        int beardLength[10];
        int M = 0, i;

        for (i = 0; i < 10; i++)
            scanf("%d", &beardLength[i]);

        for (i = 1; i < 10; i++)
        {

            if (beardLength[i - 1] < beardLength[i])
                M--;
            if (beardLength[i - 1] > beardLength[i])
                M++;
        }

        if (abs(M) == 9)
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }
}