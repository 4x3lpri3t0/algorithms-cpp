// https://codeforces.com/problemset/problem/584/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    
    int n, t;
    cin >> n >> t;
    
    if (n == 1 && t == 10)
        cout << -1;
    else
    {
        cout << t;
        if (t == 10)
            n--;
        for (int i = 0; i < n - 1; i++)
            cout << 0;
    }
}