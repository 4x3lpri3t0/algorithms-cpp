// https://onlinejudge.org/external/105/10550.pdf
#include <bits/stdc++.h>
using namespace std;

main()
{
    int start, first, second, third;

    scanf("%d %d %d %d", &start, &first, &second, &third);

    while (start || first || second || third)
    {
        printf("%d\n", 1080 + ((start - first + 40) % 40 + (second - first + 40) % 40 + (second - third + 40) % 40) * 9);
        scanf("%d %d %d %d", &start, &first, &second, &third);
    }
}