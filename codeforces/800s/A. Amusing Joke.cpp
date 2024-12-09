// https://codeforces.com/problemset/problem/141/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    if (str1.length() + str2.length() != str3.length())
    {
        cout << "NO";
        return 0;
    }

    string comp1 = str1 + str2;
    sort(comp1.begin(), comp1.end());
    sort(str3.begin(), str3.end());
    for (int i = 0; i < comp1.length(); i++)
    {
        if (comp1[i] != str3[i])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}