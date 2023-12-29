// https://codeforces.com/contest/1915/problem/0
#include <bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int n) {
    int uniqueNum = 0;
    for(int i = 0; i < n; i++) {
        uniqueNum ^= arr[i];
    }
    return uniqueNum;
}

int main()
{
    ios::sync_with_stdio(0);
    int T, n;
    cin >> T;

    while ( T-- > 0)
    {
        // Read int array of size 3:
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }

        // Print the unique number:
        cout << findUnique(arr, 3) << endl;
    }
}