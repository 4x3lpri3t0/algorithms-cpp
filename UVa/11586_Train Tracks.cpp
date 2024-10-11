// https://onlinejudge.org/external/115/11586.pdf
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, m, f;
    scanf("%d", &N);
    getchar();
    while (N--)
    {
        string s;
        getline(cin, s);
        int m = f = 0;
        int len = s.size();
        for (int i = 0; i < len; i++)
        {
            if (s[i] == 'M')
                m++;
            else if (s[i] == 'F')
                f++;
        }

        if (f == m && len > 2)
            printf("LOOP\n");
        else
            printf("NO LOOP\n");
    }
    return 0;
}