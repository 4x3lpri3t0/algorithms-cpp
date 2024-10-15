// https://onlinejudge.org/external/124/12403.pdf
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, K, sum = 0;
    scanf("%d", &T);
    while (T--)
    {
        char command[10];
        scanf("%s", command);

        if (command[0] == 'd') // Donate
        {
            scanf("%d", &K);
            sum += K;
        }
        else // Report
        {
            printf("%d\n", sum);
        }
    }
}