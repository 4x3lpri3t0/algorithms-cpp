// https://codeforces.com/problemset/problem/1042/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int n;
map<string, int> vtp; // Vitamine to Price

inline void read()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int c;
        string s;
        cin >> c >> s;
        sort(s.begin(), s.end()); // e.g. "BAC" -> "ABC"
        if (vtp.count(s))
            vtp[s] = min(vtp[s], c);
        else
            vtp[s] = c;
    }
}

inline int getC(string a, string b)
{
    if (!vtp.count(a) || !vtp.count(b))
    {
        return INF;
    }
    return vtp[a] + vtp[b];
}

inline void solve()
{
    int ans = INF;
    if (vtp.count("A") && vtp.count("B") && vtp.count("C"))
    {
        ans = vtp["A"] + vtp["B"] + vtp["C"];
    }
    if (vtp.count("ABC"))
    {
        ans = min(ans, vtp["ABC"]);
    }
    ans = min(ans, getC("AB", "C"));
    ans = min(ans, getC("A", "BC"));
    ans = min(ans, getC("AC", "B"));
    ans = min(ans, getC("AB", "BC"));
    ans = min(ans, getC("AC", "BC"));
    ans = min(ans, getC("AC", "AB"));
    if (ans == INF)
    {
        ans = -1;
    }
    cout << ans << endl;
}

int main()
{
    read();
    solve();
}