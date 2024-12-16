// https://www.codingame.com/ide/puzzle/stock-exchange-losses
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int mn = 0, mx = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;

        mx = max(mx, v);
        int diff = v - mx;
        mn = min(mn, diff);
    }

    cout << mn << endl;
}