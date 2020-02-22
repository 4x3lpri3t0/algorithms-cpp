#include <bits/stdc++.h>
#define int long long
using namespace std;

// https://codeforces.com/contest/665/problem/C
int32_t main()
{
    string str;
    cin >> str;

    char c[] = {'a', 'b', 'c'};
    for (int i = 1; i < str.size(); i++)
        if (str[i - 1] == str[i])
            for (int j = 0; j < 3; j++)
                if (c[j] != str[i + 1] && c[j] != str[i - 1])
                    str[i] = c[j];

    cout << str;
}