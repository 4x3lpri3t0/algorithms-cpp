// https://codeforces.com/problemset/problem/71/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int T;
    string str;
    cin >> T;

    while ( T-- > 0)
    {
        cin >> str;
        int len = str.length();
        if (len < 11)
        {
            cout << str << endl;
        }
        else
        {
            cout << str[0] << len - 2 << str[len - 1] << endl;
        }
    }
}