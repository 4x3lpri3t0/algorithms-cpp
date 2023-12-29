// TODO: Fix it!

// https://codeforces.com/contest/1915/problem/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int T, n;
    cin >> T;

    while ( T-- > 0)
    {
        cin >> n;

        long sum = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            sum += temp;
        }

        // Output YES if the square root of the sum remainder is 0:
        int num = sqrt(sum);
        if ( num * num == sum)
        {
            cout << "YES" << " " + to_string(num) + " * " + to_string(num) + " = " + to_string(sum) << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}