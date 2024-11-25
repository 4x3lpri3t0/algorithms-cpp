// https://codeforces.com/problemset/problem/327/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);
    int initial_ones = 0;

    // Step 1: Read the array and count initial number of 1s
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            initial_ones++;
            arr[i] = -1; // Transform 1 -> -1
        }
        else
        {
            arr[i] = 1;  // Transform 0 -> +1
        }
    }

    // Step 2: Apply Kadane's Algorithm to find the max flipping gain
    int max_gain = 0, current_gain = 0;
    for (int i = 0; i < n; i++)
    {
        current_gain = max(arr[i], current_gain + arr[i]);
        max_gain = max(max_gain, current_gain);
    }

    // Step 3: Handle edge case where all elements are 1
    if (max_gain == 0)
        cout << initial_ones - 1 << endl; // Flip one element at least
    else
        cout << initial_ones + max_gain << endl;

    return 0;
}

// dp
// !
// Kadane's Algorithm: https://en.wikipedia.org/wiki/Maximum_subarray_problem#Kadane's_algorithm