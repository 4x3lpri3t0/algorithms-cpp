// https://codeforces.com/problemset/problem/716/B
// There are some possible optimizations (check Tutorial)
#include <bits/stdc++.h>
using namespace std;

int cnt[27];
string s;
int n;

bool is_valid_substr()
{
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] > 1)
            return false;
    }
    return true;
}

void fill_others()
{
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
            s[i] = 'A';
    }
}

char get_next_available()
{
    int cur = 0;
    while (cnt[cur] > 0)
        cur++; // Alphabet letter already present, skip

    cnt[cur] = 1;

    return cur + 'A';
}

int main()
{
    cin >> s;

    n = s.length();
    if (n < 26)
    {
        cout << -1;
        return 0;
    }

    for (int i = 0; i + 25 < n; i++)
    {
        // Init with zeroes
        memset(cnt, 0, sizeof(cnt));

        for (int j = i; j <= i + 25; j++)
        {
            cnt[s[j] - 'A']++; // Increment appearance counter
        }

        if (!is_valid_substr())
            continue;

        // Replace all ?s
        for (int j = i; j <= i + 25; j++)
        {
            if (s[j] == '?')
                s[j] = get_next_available();
        }

        // Fill the ones that we don't care about
        fill_others();

        cout << s;
        return 0;
    }

    cout << -1;
    return 0;
}