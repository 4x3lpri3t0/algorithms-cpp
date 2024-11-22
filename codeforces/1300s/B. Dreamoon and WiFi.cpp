// https://codeforces.com/problemset/problem/476/B
#include <bits/stdc++.h>
using namespace std;

int aStrBalance = 0, validCount = 0, totalCount = 0;

void dpTest(string& str, int i, int pos)
{
    if (i == str.size())
    {
        if (pos == aStrBalance)
            validCount++;
        totalCount++;
        return;
    }

    if (str[i] != '+')
        dpTest(str, i + 1, pos - 1);
    if (str[i] != '-')
        dpTest(str, i + 1, pos + 1);
}

int main()
{
    string aStr, bStr;
    cin >> aStr >> bStr;

    for (auto i : aStr)
        aStrBalance += (i == '+') - (i == '-'); // +1 or -1

    dpTest(bStr, 0, 0);
    cout << fixed << setprecision(18) << (double)validCount / totalCount << endl;

    return 0;
}

// bitmasks
// combinatorics
// dp
// math
// probabilities