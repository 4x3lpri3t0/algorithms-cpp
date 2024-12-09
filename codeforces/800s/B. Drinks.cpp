// https://codeforces.com/problemset/problem/200/B
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    // Read int array:
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Calculate sum:
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    // Calculate average:
    double avg = sum / n;

    // Print result:
    cout << avg << endl;
}