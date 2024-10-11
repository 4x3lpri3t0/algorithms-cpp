// https://onlinejudge.org/external/1/100.pdf
#include <bits/stdc++.h>
using namespace std;

// Return number of elements in the 3n+1 cycle for m
int cycle(int m)
{
    int count = 1;
    while (m != 1)
    {
        m = (m % 2 == 0) ? m / 2 : 3 * m + 1;
        count++;
    }
    return count;
}

int main()
{
    int m, n;
    while (cin >> m >> n)
    {
        int minVal = min(m, n), maxVal = max(m, n);
        int maxCycle = 0;

        for (int i = minVal; i <= maxVal; i++)
        {
            maxCycle = max(maxCycle, cycle(i));
        }

        cout << m << " " << n << " " << maxCycle << endl;
    }
    return 0;
}