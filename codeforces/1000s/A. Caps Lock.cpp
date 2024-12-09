// https://codeforces.com/problemset/problem/131/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int n = s.length();
    bool allCaps = true;
    for (int i = 1; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            allCaps = false;
    }

    if (allCaps)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = toupper(s[i]);
            else
                s[i] = tolower(s[i]);
        }
    }

    cout << s << "\n";
}