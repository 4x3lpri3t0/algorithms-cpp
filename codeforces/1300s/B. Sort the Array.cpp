// https://codeforces.com/problemset/problem/451/B
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int i, n, l, r;
int a[N], b[N];

int main()
{
    scanf("%d", &n);

    // Init original and aux arrays
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    // Sort aux array
    sort(b, b + n);

    // Store idx of first diff element (LEFT)
    for (i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            l = i;
            break;
        }
    }

    // Store idx of last diff element (RIGHT)
    for (i = n - 1; i >= 0; i--)
    {
        if (a[i] != b[i])
        {
            r = i;
            break;
        }
    }

    // Reverse the original array (only "left to right" section)
    reverse(a + l, a + r + 1);

    // Compare to see if the array is sorted (i.e. one internal sort was enough)
    for (i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            printf("no");
            return 0;
        }
    }

    printf("yes %d %d", l + 1, r + 1);
    return 0;
}

// TODO