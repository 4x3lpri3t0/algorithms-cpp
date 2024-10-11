// https://onlinejudge.org/external/100/10038.pdf
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> sequence(n);
        for (int i = 0; i < n; i++)
        {
            cin >> sequence[i];
        }

        bool jolly = true;
        vector<bool> found(n, false); // Track the differences
        for (int i = 1; i < n; i++)
        {
            int diff = abs(sequence[i] - sequence[i - 1]);
            if (diff >= n || found[diff]) // Difference must be in range [1, n-1]
            {
                jolly = false;
                break;
            }
            found[diff] = true;
        }

        if (jolly && count(found.begin() + 1, found.end(), true) == n - 1) // All elements should be true
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
    }

    return 0;
}
