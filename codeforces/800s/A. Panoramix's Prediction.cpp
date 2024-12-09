// https://codeforces.com/problemset/problem/80/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int nextPrime = 0;
    for (int i = n + 1; i <= 50; i++)
    {
        if (isPrime(i))
        {
            nextPrime = i;
            break;
        }
    }

    cout << (nextPrime == m ? "YES" : "NO");
}