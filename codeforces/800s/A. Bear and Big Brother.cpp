// https://codeforces.com/problemset/problem/791/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int a, b;
    cin >> a >> b;

    int years = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        years++;
    }

    cout << years;
}