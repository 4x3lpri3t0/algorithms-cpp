// https://codeforces.com/contest/665/problem/C
#include <bits/stdc++.h>
using namespace std;

main()
{
    string str;
    cin >> str;

    char c[] = { 'a', 'b', 'c' };
    for (int i = 1; i < str.size(); i++)
    {
        if (str[i - 1] != str[i])
            continue;

        for (int j = 0; j < 3; j++)
        {
            if (c[j] != str[i + 1] && c[j] != str[i - 1])
                str[i] = c[j];
        }
    }

    cout << str;
}

// NOTE: "str[i + 1]" (without bound-checking) is risky to use in a different context,
// since it's undefined behavior due to accessing array out of bounds.
// Here it works returning 0 consistently, so I guess it's fine only for the sake of this exercise.
// https://stackoverflow.com/questions/1239938/accessing-an-array-out-of-bounds-gives-no-error-why

// dp
// greedy
// strings