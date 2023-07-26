// https://onlinejudge.org/external/103/10324.pdf
#include <cstdio>

int main()
{
    char s[1000005];

    int N, a, b, temp, round(1);
    bool valid;

    while (scanf("%s %d", s, &N) == 2)
    {
        printf("Case %d:\n", round++);

        while (N--)
        {
            scanf("%d%d", &a, &b);
            if (b < a)
            {
                temp = a;
                a = b;
                b = temp;
            }

            valid = true;
            for (int i = a; i < b; ++i)
                if (s[i] != s[i + 1])
                    valid = false;

            if (valid)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
}