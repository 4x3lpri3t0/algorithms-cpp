// https://codeforces.com/problemset/problem/1030/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin >> n;

    // Read int array:
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Check if there is a 1:
    bool containsOne = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            containsOne = true;
    }

    cout << (containsOne ? "HARD" : "EASY") << endl;
}