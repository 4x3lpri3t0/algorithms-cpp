// https://codeforces.com/problemset/problem/43/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    string s;
    map<string, int> m;
    while (cin >> s)
        m[s]++;
    
    string ans;
    int max = 0;
    for (auto i : m)
    {
        if (i.second > max)
        {
            max = i.second;
            ans = i.first;
        }
    }

    cout << ans << '\n';
}

// strings