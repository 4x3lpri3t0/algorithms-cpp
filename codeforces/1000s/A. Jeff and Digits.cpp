// https://codeforces.com/problemset/problem/352/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count_5 = 0, count_0 = 0;

    // Count the number of 5's and 0's
    for (int i = 0; i < n; i++)
    {
        int card;
        cin >> card;
        if (card == 5)
        {
            count_5++;
        }
        else
        {
            count_0++;
        }
    }

    // If there are no 0's, we can't make a number divisible by 10
    if (count_0 == 0)
    {
        cout << -1 << endl;
        return 0;
    }

    // If there are less than 9 fives, we can't form a number divisible by 9
    if (count_5 < 9)
    {
        cout << 0 << endl;
        return 0;
    }

    // Use the largest multiple of 9 of the 5's
    int usable_5s = (count_5 / 9) * 9;

    // Print the 5's
    for (int i = 0; i < usable_5s; i++)
    {
        cout << 5;
    }

    // Print all the 0's
    for (int i = 0; i < count_0; i++)
    {
        cout << 0;
    }

    cout << endl;
    return 0;
}