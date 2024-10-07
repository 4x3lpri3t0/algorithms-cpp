// https://onlinejudge.org/external/125/12554.pdf
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char song[17][100] =
        {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};

    char name[200][100];

    int n, songCycles, flag = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%s", &name[i]);

    if (n > 16)
        songCycles = n / 16 + 1;
    else
        songCycles = 1;

    for (int i = 0, x = 0, z = 0; i < 16 * songCycles; i++)
    {
        if (!flag && z == 16)
            z = 0;

        printf("%s: %s\n", name[x], song[z++]);
        x++;

        if (x == n)
        {
            x = 0;
            flag = 1;
        }
    }
}