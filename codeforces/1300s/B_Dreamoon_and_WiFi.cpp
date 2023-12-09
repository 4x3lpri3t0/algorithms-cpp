// https://codeforces.com/problemset/problem/476/B
#include <bits/stdc++.h>
using namespace std;

int diffAB = 0, c = 0, t = 0;

void testa(string &str, int i, int pos)
{
    if (i == str.size())
    {
        if (pos == diffAB)
            c++;
        t++;
        return;
    }

    if (str[i] != '+')
        testa(str, i + 1, pos - 1);
    if (str[i] != '-')
        testa(str, i + 1, pos + 1);
}

int main()
{
    string a, b;
    cin >> a >> b;

    for (auto i : a)
        diffAB += (i == '+') - (i == '-'); // +1 or -1

    testa(b, 0, 0);
    cout << fixed << setprecision(18) << (double)c / t << endl;

    return 0;
}