// https://codeforces.com/problemset/problem/25/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin >> n;

    map<string, int> dict;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (dict.find(s) == dict.end())
        {
            dict[s] = 0;
            cout << "OK" << endl;
        }
        else
        {
            dict[s]++;
            cout << s << dict[s] << endl;
        }
    }
}