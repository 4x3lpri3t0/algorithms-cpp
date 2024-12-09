// https://codeforces.com/problemset/problem/339/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string sum;
    cin >> sum;

    vector<int> numbers;
    for (int i = 0; i < sum.length(); i++)
    {
        if (sum[i] != '+')
        {
            numbers.push_back(sum[i] - '0');
        }
    }

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i];
        if (i != numbers.size() - 1)
        {
            cout << "+";
        }
    }
}