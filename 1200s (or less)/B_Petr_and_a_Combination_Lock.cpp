#include <bits/stdc++.h>
using namespace std;

vector<int> a;
int n;

bool isZero(int pos, int accum)
{
    pos++;

    if (pos >= n)
        if (accum % 360 == 0)
            return true;
        else
            return false;

    return isZero(pos, accum + a[pos]) || isZero(pos, accum - a[pos]);
}

// https://codeforces.com/problemset/problem/1097/B
int main()
{
    cin >> n;

    int i = 0;
    while (i < n)
    {
        int input;
        cin >> input;
        a.push_back(input);

        i++;
    }

    cout << (isZero(-1, 0) ? "YES" : "NO");
}