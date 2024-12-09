// https://codeforces.com/problemset/problem/702/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int input;
    vector<int> V;
    while (cin >> input)
        V.push_back(input);

    int max = 1;
    int localMax = 1;
    for (int i = 1; i < n; i++)
    {
        int prev = V[i - 1];
        if (V[i] > prev)
        {
            localMax++;
            max = std::max(max, localMax);
        }
        else
        {
            localMax = 1;
        }
    }

    cout << max;
}