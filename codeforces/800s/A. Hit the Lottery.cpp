// https://codeforces.com/problemset/problem/996/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> bills{ 100, 20, 10, 5, 1 };

    int currentBill = 0;
    int total = 0;
    while (n > 0)
    {
        if (bills[currentBill] > n)
            currentBill++;
        else
        {
            total += n / bills[currentBill];
            n = n % bills[currentBill];
        }
    }

    cout << total;
}